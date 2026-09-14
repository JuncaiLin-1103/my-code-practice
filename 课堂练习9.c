main()
{
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
	system("pause");
}
