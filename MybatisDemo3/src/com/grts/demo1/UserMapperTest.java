package com.grts.demo1;

import org.apache.ibatis.session.SqlSession;
import org.junit.Test;

public class UserMapperTest {
	//测试添加数据
	@Test
	public void testaddUser() {
		// TODO Auto-generated method stub
		SqlSession sqlSession = MybatisUtil.getSqlSession();
		UserMapper mapper = sqlSession.getMapper(UserMapper.class);
		int i = mapper.addUesr(new User(14, "林十四", "123321"));
		System.out.println(i);
		sqlSession.commit();
	}
}
