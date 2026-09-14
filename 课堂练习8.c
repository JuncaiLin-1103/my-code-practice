main()
{
	int a;
	scanf("%d",&a);
	if(a/10000>=1)
	printf("5\n %d %d %d %d %d",a/10000,a/1000%10,a/100%10,a/10%10,a%10);
	else
	if(a/1000>=1)
	printf("4\n %d %d %d %d",a/1000%10,a/100%10,a/10%10,a%10);
	else
	if(a/100>=1)
	printf("3\n %d %d %d",a/100%10,a/10%10,a%10);
	else
	if(a/10>=1)
	printf("2\n %d %d",a/10,a%10);
	else
	printf("1\n %d",a);
	system("pause");
	
	}
