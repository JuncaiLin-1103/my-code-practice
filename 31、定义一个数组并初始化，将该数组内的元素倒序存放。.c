int main()
{
	int a[8]={1, 3, 7, 9, 2, 4, 6, 8};
	int len = 8;
	int i, j, t;
	
	for(i = 0; i < len; i ++) scanf("%d", &a[i]);
/*	
	// 选择排序：每次找到最大/最小的数 
	for(i = 0; i < len - 1; i ++)
		for(j = i + 1; j < len; j ++)
			if(a[i] < a[j]) 
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}*/
	// 冒泡排序：每次比较相邻的两个数 
	for(i = 0; i < len; i ++)
		for(j = 0; j < len - i; j ++)
			if(a[j] < a[j + 1]) 
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
			
	for(i = 0; i < 8; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
	return 0;
 } 
