main()
{
	int n,i,x=1;
	double s=1.0;
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		x*=i;
		s=s-1/x;
		}	
	printf("%f",s);	
}


//´íÎó´úÂë 
