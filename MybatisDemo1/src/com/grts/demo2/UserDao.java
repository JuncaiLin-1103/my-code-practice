package com.grts.demo2;

import java.awt.List;
import java.util.Map;

import org.apache.ibatis.annotations.Param;

public interface UserDao {

	//增
	int addUser(User user);
	
	//删
	int delectUser(int id);
	
	//改方法1
	int updateuser(User user);
	
	//改方法2
	/*
	 * 注意这里的@param是方便后面直接测试的时候传值，里面的参数必须和UserDao.xml里面的一致
	 */
	int updateuser2(@Param("id")int id , @Param("name")String name , @Param("pwd")String pwd);
	
	//该方法3 Map
	int updateuser3(Map<String, Object> map);
	
	//id查询
	User findUserById(int id);
	
	//查询所有
	java.util.List<User> findAllUser();
	
	//通过姓名进行模糊查询
	java.util.List<User> findLikeUserByname(String name);
	
	//进行分页查询
	java.util.List<User> findUserByLimit(@Param("startIndex") int startIndex,@Param("pageSides") int pageSides );
}
