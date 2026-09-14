package com.grts.demo1;

import java.util.ArrayList;
import java.util.Date;
import java.util.HashMap;
import java.util.List;

import org.apache.ibatis.session.SqlSession;
import org.junit.jupiter.api.Test;

public class BlogMapperTest {

	@Test
	void testgetBlogs() {
		SqlSession sqlSession = MybatisUtil.getSqlSession();
		BlogMapper blogMapper = sqlSession.getMapper(BlogMapper.class);
		
		List<Blog> blogs = blogMapper.getBlogs();
		for (Blog blog : blogs) {
			
				System.out.println(blog);
			
		}
	}
		
	@Test
	void testinsertBlog() {
		SqlSession sqlSession = MybatisUtil.getSqlSession();
		BlogMapper blogMapper = sqlSession.getMapper(BlogMapper.class);
		blogMapper.insertBlog(new Blog("2", "西游记", "吴承恩", new Date(), 399));
		blogMapper.insertBlog(new Blog("3", "三国演义", "罗贯中", new Date(), 499));
		blogMapper.insertBlog(new Blog("4", "水浒传", "施耐庵", new Date(), 299));
		sqlSession.close();
	}
	
	//测试用IF条件查询
	@Test
	void testgetBlogsIf() {
		SqlSession sqlSession = MybatisUtil.getSqlSession();
		BlogMapper blogMapper = sqlSession.getMapper(BlogMapper.class);
		
		HashMap<String,Object> map = new HashMap<>();
		//map当中来存储条件
		//map.put("title", "水浒传");
		//map.put("author", "曹雪芹");
		map.put("views", "399");
		List<Blog> list = blogMapper.getBlogsIf(map);
		for (Blog blog : list) {
			System.out.println(list);
		}
		sqlSession.close();
	}
	
	//测试用Choose条件查询
	@Test
	void testgetBlogsChoose() {
		SqlSession sqlSession = MybatisUtil.getSqlSession();
		BlogMapper mapper = sqlSession.getMapper(BlogMapper.class);
		
		HashMap<String,Object> map = new HashMap<String, Object>();
		map.put("title", "水浒传");
		//map.put("author", "曹雪芹");
		//map.put("views", "499");
		List<Blog> list = mapper.getBlogsChoose(map);
		for (Blog blog : list) {
			System.out.println(list);
		}
		sqlSession.close();
	}
	
	//测试用Set条件更新
	@Test
	void testupdateBlogSet() {
		SqlSession sqlSession = MybatisUtil.getSqlSession();
		BlogMapper mapper = sqlSession.getMapper(BlogMapper.class);
		
		
		Blog blog = new Blog("4","白夜行" , "东野圭吾", new Date(), 1999);
		int i = mapper.updateBlogSet(blog);
		System.out.println(i);
		sqlSession.close();
	}
	
	//测试用Foreach进行查询ID等于1或2的数据
	@Test
	void testgetblogsForeach() {
		SqlSession sqlSession = MybatisUtil.getSqlSession();
		BlogMapper mapper = sqlSession.getMapper(BlogMapper.class);
		
		ArrayList<String>ids = new ArrayList<String>();
		ids.add("1");
		ids.add("2");
		List<Blog> blogs = mapper.getblogsForeach(ids);
		for (Blog blog : blogs) {
			System.out.println(blog);
		}
		sqlSession.close();
	}
}
