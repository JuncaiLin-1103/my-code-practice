main(){
	//从键盘输入10个数，分别输出最大值和最小值
	int i,a,b,c;
	for(i = 1 ; i <= 10; i++){
		
		if(i==1){
			scanf("%d",&a);
			b=a;
			c=a;
		}else{
			scanf("%d",&a);
			if(a > b ){
				b=a;
			}
			if( a < c){
				c =a;
			}
		}
		
	} 
	printf("最大值是%d,最小值是%d\n",b,c);
}
