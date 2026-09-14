//请编写一个函数int fun(int x)，它的功能是：判断整数x是否是同构数。若是同构数，函数返回1；否则返回0。

int fun(int x);

main(){
	printf("请输入一个不大于100的数；\n");
	int x;
	scanf("%d",&x);
	printf("%d",fun( x));
	
}

int fun(int x){
	int a = x * x;
	if(x == a % 10 || x == a / 10 % 10)
		return 1;
	return 0;
}
