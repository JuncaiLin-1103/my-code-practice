//请编写一个unsigned fun(unsigned w)，w是一个大于10的无符号整数，若w是n（n>=2）位的整数，函数求出w的后n-1位的数作为函数值返回。
unsigned fun(unsigned w);

main(){
	unsigned w;
	printf("请输入是一个大于10的无符号整数\n");
	scanf("%d",&w);
	printf("%d",fun(w));
	
}

unsigned fun(unsigned w){
	int t;
	if(w > 10000){
		t = w %10000;
		return t;
	}else
	if( w > 1000){
		t = w %1000;
		return t;
	}else
	if( w > 100){
		t = w %100;
		return t;
	}else{
		t = w %10;
		return t;
	}

	
	
}
