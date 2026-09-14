int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
	int i=b,n=a%i,m=b%i;
	while (n==0&&m==0&&b>=1)
{
		printf("最大公约数为：%d",i);
	printf("最小公倍数为：%d",a*b/i);
	
}
	b--;	
	}
	else
	if(a<b)
	{
	int i=a,n=b%i,m=a%i;
	while (n==0&&m==0&&a>=1)
{
		printf("最大公约数为：%d",i);
	printf("最小公倍数为：%d",a*b/i);
	
	}
	a--;	
	}
return 0;
 } 
