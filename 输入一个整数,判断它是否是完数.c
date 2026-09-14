//输入一个整数,判断它是否是完数 所有因子之和 
main(){
	int a;
	scanf("%d",&a);
	//找因子
	int i,sum = 0;
	
	for(i = 1;i < a;i++){
		if(a % i == 0)
			sum += i;
		}
		
		if( sum == a)
			printf("是完数");
		
		else 
			printf("不是完数") ;
	
}
