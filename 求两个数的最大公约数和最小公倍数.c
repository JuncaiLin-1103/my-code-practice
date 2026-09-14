//求两个数的最大公约数和最小公倍数
main(){
	int a,b,c,d,i;
	scanf("%d",&a);
	scanf("%d",&b);
	//最大公约数
	 if(a>=b){
	 	for(i=b;i>=1;i--){
	 		if(a%i==0 && b%i==0){
	 			printf("最大公约数是%d",i);
	 			break;
			 }
		 }
	 }else{
	 	for(i=a;i>=1;i--){
	 		if(a%i==0 && b%i==0){
	 			printf("最大公约数是%d",i);
	 			break;
				 }
	 		}
		}
	 //最小公倍数
	 if(a>=b){
	 	for(i=a; ;i++){
	 		if(i%a==0 && i%b==0){
	 			printf("最小公倍数是%d",i);
	 			break;
			 }
		 }
	 } else{
	 	for(i=b; ;i++){
	 		if(i%a==0 && i%b==0){
	 			printf("最小公倍数是%d",i);
	 			break;
			 }
		}
	}
} 
