int main()
{
	int a,b;
	char c; 
	printf("请输入你想计算的式子\n");
	scanf("%d%c%d=",&a,&c,&b); 
	if(c=='+')
	{
	printf("%d",a+b);
	}
	else
	if(c=='-')
	{
	printf("%d",a-b);
	}
	else
	if(c=='*')
	{
		printf("%d",a*b);
	}
	else
	if(c=='/')
	{	
	printf("%f",1.0*a/b);
	}
	
	return 0;
}
