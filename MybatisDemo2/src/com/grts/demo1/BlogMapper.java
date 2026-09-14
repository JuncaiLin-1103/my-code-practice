package com.grts.demo1;

import java.util.List;
import java.util.Map;

import org.apache.ibatis.annotations.Param;

public interface BlogMapper {
	/*查询所有*/
	List<Blog> getBlogs();
	/*插入一条数据*/
	int insertBlog(Blog blog);
	/*用IF条件查询*/
	List<Blog>getBlogsIf(Map<String, Object>map);
	/*用Choose条件查询*/
	List<Blog>getBlogsChoose(Map<String, Object>map);
	/*用Set进行部分更新*/
	int updateBlogSet(Blog blog);
	/*用Foreach进行查询ID等于1或2的数据*/
	List<Blog> getblogsForeach(@Param("ids")List<String>ids);
}
