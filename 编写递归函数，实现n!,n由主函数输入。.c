//编写递归函数，实现n!,n由主函数输入。
int f(int n);

main(){
	int n;
	scanf("%d",&n);
	printf("你输入的%d!的结果是%ld\n",n,f(n));
}

int f(int n){
	int i;
	if(n < 0)
		printf("n < 0,输入错误");
	else if(n == 1 || n == 0)
		i = 1;
	else
		i = f(n - 1) * n;
	return i;	
	
}
