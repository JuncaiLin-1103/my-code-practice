//打印菱形
main(){
	int i,j;
	//打印前4行
	//循环4次
	for(i=1;i<=7;i++){
		//打印前4行
		if(i<=4){
				//打印空格
			for(j=1;j<=4-i;j++)
				printf(" ");
			//打印图形个数
			for(j=1;j<=2*i-1;j++)
				printf("*");
			printf("\n");
		}
		//打印后3行
		else{
			//打印空格
			for(j=1;j<=i-4;j++)
				printf(" ");
			//打印图形个数
			for(j=1;j<=7-2*(i-4);j++)
				printf("*");
			printf("\n");
			 
		} 
	} 
} 
