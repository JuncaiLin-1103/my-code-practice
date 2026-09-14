int main()
{
	int a,b,c,d;
	printf("请输入你想比较的两个分数：\n");
	scanf("%d/%d %d/%d",&a,&b,&c,&d);
	float x=1.0*a/b;
	float y=1.0*c/d;
	if(x>y)
	{
		printf("%d/%d>%d/%d",a,b,c,d);
	}
	else
	if(x<y)
	{
		printf("%d/%d<%d/%d",a,b,c,d);
	}
	else
	{
		printf("%d/%d=%d/%d",a,b,c,d);
	}
	return 0;
}
