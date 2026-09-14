//输入任意整数，按倒序输出
main(){
	int a;
	scanf("%d",&a);
	int b = 0;
	while(a % 10 != 0){
		b = b*10 + a%10;
		a = a / 10;
	}
	printf("%d",b);
	
} 
