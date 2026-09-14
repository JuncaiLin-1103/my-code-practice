main()
{
	printf("欢迎来到我的程序，请选择您需要使用的功能：1.计算器、2.回文数 ");
	int m;
	scanf("%d",&m);

	if(m==1)

		{
			printf("请输入你想要计算的式子"); 
	int a,b;
	char c;
	scanf("%d%c%d",&a,&c,&b);
	if (c=='+')
	printf("%d+%d=%d",a,b,a+b);
	else
	if (c=='-')
	printf("%d-%d=%d",a,b,a-b);
	else
	if (c=='*')
	printf("%d*%d=%d",a,b,a*b);
	else
	if (c=='/')
	printf("%d/%d=%d",a,b,a/b);
	
	system("cls");
}
	else
	if(m==2)
	{
			printf("请输入你想要测试的数");
	int a;
	scanf("%d",&a);
	if(a/10000==a%10&&a/10%10==a/1000%10)
	printf("是回文数");
	else
	printf("不是回文数");
	system("cls"); 
		}
	 
	 
 } 
