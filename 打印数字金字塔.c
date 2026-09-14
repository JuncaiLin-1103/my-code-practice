//打印数字金字塔
main(){
	int i,j;
	//行数 
	for(i = 1; i <= 4; i++){
		//打印空格 
		for(j = 1; j <= 4-i;j++)
			printf(" ");
		//打印个数 
		for(j = 1;j<= 2*i-1; j++)
			printf("%d",i);
		
			printf("\n");
		
	}
} 
