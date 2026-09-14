int main()
{
	int x,m=-1,i,a[9]={1,2,3,4,5,6,7,8,9};
	printf("请输入您想查找到数据：");
	scanf("%d",&x);
	for(i = 0; i < 9; i ++) 
		if(x == a[i]) 
			m = i;
			
	if(m == -1) printf("数据不存在\n");
	else printf("数据下标为%d\n", m);
	
	/*
	
	for(i=0;i<=8;i++)
	{
		if(x==a[i])
		{
	printf("数据存在，在%d处",i);
			int m=0;
			break;	
		}
	if(m==1)
	printf("数据不存在");


	}
*/

	return 0;
}
