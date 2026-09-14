//打印出99乘法表
main(){
	int i,j;
	for(i = 1; i <= 9; i++){
		for(j = 1; j <= i; j++){
			printf("%d * %d = %d  ",i,j,i*j);
			
		}
		printf("\n");
	}
}
