//输入数字，输出各位数数字之和
main(){
	int a,b = 0,i;
	scanf("%d",&a);
	for(i=1;a!=0;i*10){
		b = b + a / i % 10;
		a = a/10;
		}
	
		printf("%d",b);
		

	

} 
