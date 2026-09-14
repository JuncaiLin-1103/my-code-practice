int main()
{
	int i,a[10],sum=0; 
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	}
	int m=a[0],n=a[10];
	for(i=0;i<10;i++)
	{
		if(a[i]>=m)
		{
			m=a[i];
		}
		if(a[i]<=n)
		{
			n=a[i];
		}
		
	
		sum += a[i];
	
	}
	printf("最大数为%d，最小数位%d",m,n);
	printf("平均值为%f",sum/10.0);
	return 0;
}
