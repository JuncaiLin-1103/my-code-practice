int main()
{
	int x,i,a=1;
	printf("请输入你想阶乘的数：\n");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		a*=i;
	}
	printf("阶乘为：%d",a);
	return 0;
}
