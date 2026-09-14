package com.grts.demo3;

import java.io.IOException;
import java.io.InputStream;

import org.apache.ibatis.io.Resources;
import org.apache.ibatis.session.SqlSession;
import org.apache.ibatis.session.SqlSessionFactory;
import org.apache.ibatis.session.SqlSessionFactoryBuilder;

public class MybatisUtil {

	private static SqlSessionFactory sqlSessionFactory = null;
	static {
	try {
	String resource = "com/grts/demo3/mybatis-config.xml";
	InputStream inputStream =
	Resources.getResourceAsStream(resource);
	sqlSessionFactory = new
	SqlSessionFactoryBuilder().build(inputStream);
	} catch (IOException e) {
	e.printStackTrace();
	}
	}
	/*
	* 接下来可以获取sqlSession实例，他之中完全包含SQL命令所需的所有方法
	* */
	public static SqlSession getSqlSession(){
	return sqlSessionFactory.openSession();
	}
}
