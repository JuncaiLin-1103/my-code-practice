int main()
{
	int a[10];
	int i;
	printf("请输入10个数：\n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
		
	}
	int max,min;
	max=a[0];
	min=a[10];
	for(i=1;i<=10;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("最大的数为%d",max);
	printf("最小的数为%d",min);

	return 0;
}
