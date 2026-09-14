//打印所有的水仙花数
main(){
	int i;
	for(i = 100; i < 1000; i++){
		int a = i % 10;
		int b = i / 10 % 10;
		int c = i/100;
		int d = a*a*a + b*b*b + c*c*c;
		
		if( d == i){
			printf("%d\t",i);
		}
		else{
			continue;
		}
		
		
	}
	
} 
