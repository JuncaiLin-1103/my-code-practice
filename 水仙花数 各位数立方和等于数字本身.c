//水仙花数 各位数立方和等于数字本身
main(){
	int a,i;
	int x = a%10;
	int y = a/10%10;
	int z = a/100;
	printf("请输入一个三位数\n");
	scanf("%d",&a);
	for(i = 1; i<=3;i++){
		//个位 
		x*=1;
		//十位 
		y*=1;
		//百位 
		z*=1;
	}
	if(x+y+z == a){
		printf("是水仙花数"); 
	}
	printf("不是水仙花数");
} 
