//输出100以内的所有素数
main(){
	int a;
	int b;
	int i;
	for( a = 2; a <= 100; a++){
		i = 1;
		for(b = 2; b < a; b++){
			
			if(a % b == 0)
			i = 0;
		}
		
		if(i){
			printf("%d\n",a);
		}
	
	}
}
