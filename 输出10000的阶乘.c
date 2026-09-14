//输出10000的阶乘
 int main()
{
	int a[65536] = {1};
	//目标阶层数 
	int x = 100;
	int m = 65536;
	int num;
	int i;
	int jinWei = 0;
	for( num = 2; num <= x; num++){
	
		for(i = 0; i < m; i++){
			int ji;
			ji = a[i] * num + jinWei;
			jinWei = ji / 10;
			a[i] = ji % 10;
		}
	}
	
	
	for(i = m-1; i >= 0; i--){
		if(a[i] == 0){
			 m--;
		}
		
	}
	
	for(i = m; i >= 0; i--){
		if(a[i] == 0){
			 m--;
		}
		printf("%d",a[i]);
	}
	
	printf("\n");
	
	return 0;
}
