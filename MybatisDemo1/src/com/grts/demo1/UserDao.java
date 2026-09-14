package com.grts.demo1;

/*
 * 创建数据库接口，在这里定义操作数据库的方法
 */
public interface UserDao {

	//通过id查询数据库中的数据
	 User findUserByID(int id);

	
	 
}
