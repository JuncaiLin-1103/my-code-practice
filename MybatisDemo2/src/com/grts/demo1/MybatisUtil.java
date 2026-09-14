package com.grts.demo1;

import java.io.IOException;
import java.io.InputStream;

import org.apache.ibatis.io.Resources;
import org.apache.ibatis.session.SqlSession;
import org.apache.ibatis.session.SqlSessionFactory;
import org.apache.ibatis.session.SqlSessionFactoryBuilder;

public class MybatisUtil {

	/*
	* 使用Mybatis的第一步：获取sqlSessionFactory对象
	* */
	private static SqlSessionFactory sqlSessionFactory = null;
	static {
	try {
	String resource = "com/grts/demo1/mybatis-config.xml";
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
	//设置参数为true：可以自动提交事务
	return sqlSessionFactory.openSession(true);
	}
}
