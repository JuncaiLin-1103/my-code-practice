main()
{
	int n;
	double sum=0.0,a=1.0,b=2.0,c;
	scanf("%d",&n);
	while(n>0)
	{
		sum+=a/b;
		c=a+b;
		a=b;
		b=c;
		n--;
	}
	printf("%f",sum);
	system("pause");
}

