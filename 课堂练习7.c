main()
{
	int a;
	scanf("%d",&a);
	if(a/10000==a%10&&a/10%10==a/1000%10)
	printf("是回文数");
	else
	printf("不是回文数");
	system("pause"); 
}
