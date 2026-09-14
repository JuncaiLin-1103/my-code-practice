package com.grts.demo1;

import org.apache.ibatis.session.SqlSession;
import org.junit.jupiter.api.Test;

public class UserDaoTest {

	@Test
	void testFindUserByID() {
		SqlSession sqlSession = MybatisUtil.getSqlSession();
		UserDao userDao = sqlSession.getMapper(UserDao.class);
		
		User user = userDao.findUserByID(1);
		System.out.println(user);
	}
}
