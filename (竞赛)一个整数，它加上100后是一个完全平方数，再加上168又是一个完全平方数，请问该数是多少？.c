//(竞赛)一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
main(){
	int num;
	int a,b;
	for( num = -65536; ; num++){
		a = num +100;
		int isWQPFS = 0;
		for(b = -65536; b<=a; b++){
			if(a == b*b){
				isWQPFS = 1;
				
			}
		} 
		
		a = a + 168;
		int isWQPFS2 = 0;
		for(b = -65536; b <=a; b++){
			if(a == b*b){
				isWQPFS2 = 1;
				
			}
		} 
		
	if(isWQPFS  && isWQPFS2)
		printf("%d\n",num);
		
		
	}
	
}
