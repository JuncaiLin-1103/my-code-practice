//用气泡排序实现一维数组元素从大到小或者从小到大的排序（难）
maxToMin(int a[]);
minToMax(int a[]);

int main(){
	int a[10]={2,4,3,10,1,6,5,7,8,9};
	
	printf("按1：从大到小排序；按2：从小到大排序\n");
	int x;
	scanf("%d",&x);
	switch(x){
		case 1: maxToMin(a);break;
		case 2: minToMax(a);break;
		default : printf("输入错误！\n"); 
	} 
	return 0;	
} 

maxToMin(int a[]){
	int i,j;
	for(i = 0; i < 10; i++){
		for(j = 9; j > i; j--){
			if( a[j] > a[i]){
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		} 
	}
	for(i = 0; i < 10; i++)
		printf("%d,",a[i]);
}

minToMax(int a[]){
	int i,j;
	for(i = 0; i < 10; i++){
		for(j = 9; j > i; j--){
			if( a[j] < a[i]){
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		} 
	}
	for(i = 0; i < 10; i++)
		printf("%d,",a[i]);
}
