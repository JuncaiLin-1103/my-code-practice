//输入多少数字，出现多少层金字塔
main(){
	printf("请输入数字:\n");
	int i;
	int a,b;
	scanf("%d",&i);
	for(a = 1; a <= i ;a++){
		//打印空格
		for(b = 1;b <= i-a; b++ ){
			printf(" ");
		} 
		//打印数字个数 
		for(b=1 ; b <= 2*a-1;b++){
			printf("%d",a); 
		} 
		printf("\n");
	}
} 
