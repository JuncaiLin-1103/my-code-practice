//递归功能：编写函数fun求sum=d+dd+ddd+……+dd...d(n个d)，其中d为1-9的数字。 
int fun(int n, int m);

main(){
	printf("请输入n个d\n");
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",fun(a,b));
	
}

int fun(int n, int m){
	int sum = 0,i,s;
	
		 
	    //得到当n等于值时的这个数 
		if(n == 1)
			return m;
		else{
			return fun(n-1,m)*10 + m;
			
		}
	
	
		
	   	
}
