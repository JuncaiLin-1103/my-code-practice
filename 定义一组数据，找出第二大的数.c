//定义一组数据，各种排序 

main(){
	int a[5] = { 3,4,2,5,1};
	int i,j;
	//fangfayi
	for(i = 0; i < 5; i++){
		for(j = 4; j > i; j--){
			if(a[j] > a[i]){
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for(i = 0; i < 5; i++)
		printf("%d",a[i]);
	printf("\n");
	printf("%d",a[3]);
	
	//方法2（选择排序） 
	int n = 0;
	for(n = 0;n < 5; n++){
		for(i = n+1;i < 5;i++){
			if(a[n] > a[i]){
				int t = a[n];
				a[n] = a[i];
				a[i] = t;
			}
		}
	}
	
	//方法3(冒泡排序） 
	int n = 0;
	int(n = 0;n < 5; n++) {
		for(i = 0 ; i < 5-n; i++){
			if(a[i] > a[i+1]){
				int t = a[n];
				a[n] = a[i];
				a[i] = t;
			}
		}
	}
		
	
	/*for(i = 1; i < 5; i++){
		if(a[0] < a[i]){
			int t = a [0];
			a[0] = a[i];
			a[i] = t;
		}
	}
	for(i = 2; i < 5; i++){
		if(a[1] < a[i]){
			int t = a [1];
			a[1] = a[i];
			a[i] = t;
		}
		
	}
	for(i = 3; i < 5; i++){
		if(a[2] < a[i]){
			int t = a [2];
			a[2] = a[i];
			a[2] = t;
		}
		
	}
	printf("%d",a[2]);*/
} 
