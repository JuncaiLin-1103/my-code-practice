package com.grts.demo3;

import java.io.IOException;
import java.io.InputStream;
import java.util.HashMap;
import java.util.List;

import org.apache.ibatis.io.Resources;
import org.apache.ibatis.session.SqlSession;
import org.apache.ibatis.session.SqlSessionFactory;
import org.apache.ibatis.session.SqlSessionFactoryBuilder;
import org.junit.jupiter.api.Test;

import com.grts.demo1.MybatisUtil;
import com.grts.demo1.User;
import com.grts.demo1.UserDao;

public class UserDaoTest {

	//测试增加数据
	@Test
	void textaddUser() throws IOException {
		//执行需要salsession对象，首先要获取他
		String resource = "com/grts/demo3/mybatis-config.xml";
		InputStream inputStream = Resources.getResourceAsStream(resource);
		SqlSessionFactory sqlSessionFactory = new SqlSessionFactoryBuilder().build (inputStream);
		SqlSession sqlSession = sqlSessionFactory.openSession();
		
		//传递接口类对象
		com.grts.demo2.UserDao userDao = sqlSession.getMapper(com.grts.demo2.UserDao.class);
		com.grts.demo2.User user = new com.grts.demo2.User(13,"李四","12341");
		int i = userDao.addUser(user);
		System.out.println(i);
		
		if (i > 0) {
			sqlSession.commit();
			
		}
		sqlSession.close();
		
	}
	
	//测试查找
	@Test
	void textfindUserById() throws IOException {
		//执行需要salsession对象，首先要获取他
		String resource = "com/grts/demo2/mybatis-config.xml";
		InputStream inputStream = Resources.getResourceAsStream(resource);
		SqlSessionFactory sqlSessionFactory = new SqlSessionFactoryBuilder().build (inputStream);
		SqlSession sqlSession = sqlSessionFactory.openSession();
		
		com.grts.demo2.UserDao userDao = sqlSession.getMapper(com.grts.demo2.UserDao.class);
		com.grts.demo2.User user = userDao.findUserById(2);
		System.out.println(user);
	
	}
	
	//测试删除
	@Test
	void testDelete() throws IOException {
		String resource = "com/grts/demo2/mybatis-config.xml";
		InputStream inputStream = Resources.getResourceAsStream(resource);
		SqlSessionFactory sqlSessionFactory = new SqlSessionFactoryBuilder().build (inputStream);
		SqlSession sqlSession = sqlSessionFactory.openSession();
		
		com.grts.demo2.UserDao userDao = sqlSession.getMapper(com.grts.demo2.UserDao.class);
		int i = userDao.delectUser(3);
		System.out.println(i);
		
		if (i > 0) {
			sqlSession.commit();
			
		}
		sqlSession.close();
	}
	
	//测试更改
	@Test
	void testUpdateUser() throws IOException {
		String resource = "com/grts/demo2/mybatis-config.xml";
		InputStream inputStream = Resources.getResourceAsStream(resource);
		SqlSessionFactory sqlSessionFactory = new SqlSessionFactoryBuilder().build (inputStream);
		SqlSession sqlSession = sqlSessionFactory.openSession();
		
		com.grts.demo2.UserDao userDao = sqlSession.getMapper(com.grts.demo2.UserDao.class);
		com.grts.demo2.User user = new com.grts.demo2.User(3,"王五","123321");
		int i = userDao.updateuser(user);
		System.out.println(i);
		
		if (i > 0) {
			sqlSession.commit();
			
		}
		sqlSession.close();
	}
	
	//测试更改方法二
	@Test
	void testUpdateUser2() throws IOException {
		SqlSession sqlSession = com.grts.demo2.MybatisUtil.getSqlSession();
		com.grts.demo2.UserDao userDao = sqlSession.getMapper(com.grts.demo2.UserDao.class);
		int i = userDao.updateuser2(4,"林四","1234");
		
		
		if (i > 0) {
			sqlSession.commit();
			
		}
		sqlSession.close();
	}
	
	//测试更改方法三
		@Test
		void testUpdateUser3() throws IOException {
			SqlSession sqlSession = com.grts.demo2.MybatisUtil.getSqlSession();
			com.grts.demo2.UserDao userDao = sqlSession.getMapper(com.grts.demo2.UserDao.class);
			
			HashMap<String, Object> map = new HashMap<>();
			map.put("id", 6);
			map.put("name", "赵七");
			map.put("pwd", "123564");
			
			int i = userDao.updateuser3(map);
			
			
			if (i > 0) {
				sqlSession.commit();
				
			}
			sqlSession.close();
		}
	
	//测试查询全部用户
	@Test
	void testfindAllUser() throws IOException {
	/*	//通过工具获取sqlsession
		SqlSession sqlSession = MybatisUtil.getSqlSession();
		//传递接口
		com.grts.demo2.UserDao userDao = sqlSession.getMapper(com.grts.demo2.UserDao.class);*/
		
		String resource = "com/grts/demo2/mybatis-config.xml";
		InputStream inputStream = Resources.getResourceAsStream(resource);
		SqlSessionFactory sqlSessionFactory = new SqlSessionFactoryBuilder().build (inputStream);
		SqlSession sqlSession = sqlSessionFactory.openSession();
		
		 com.grts.demo2.UserDao userDao2 = sqlSession.getMapper(com.grts.demo2.UserDao.class);
		List<com.grts.demo2.User> users = userDao2.findAllUser();
		//遍历集合
		for (com.grts.demo2.User user : users) {
			System.out.println(user);
		}
		//
		sqlSession.close();
	
	}
	
	//测试通过名字进行模糊查询
	@Test
	void testfindLikeUserByname() {
		SqlSession sqlSession = com.grts.demo2.MybatisUtil.getSqlSession();
		com.grts.demo2.UserDao userDao = sqlSession.getMapper(com.grts.demo2.UserDao.class);
		
		List<com.grts.demo2.User> findLikeUserByname = userDao.findLikeUserByname("李");
		System.out.println(findLikeUserByname);
		
	}
	
	//测试分页查询
	@Test
	void testFindUserByLimit() {
		SqlSession sqlSession = com.grts.demo2.MybatisUtil.getSqlSession();
		com.grts.demo2.UserDao userDao = sqlSession.getMapper(com.grts.demo2.UserDao.class);
		List<com.grts.demo2.User> users = userDao.findUserByLimit(0, 4);
		for (com.grts.demo2.User user : users) {
			System.out.println(user);
		}
	}
		
		
	
}
