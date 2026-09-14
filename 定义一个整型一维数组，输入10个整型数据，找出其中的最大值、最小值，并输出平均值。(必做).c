//定义一个整型一维数组，输入10个整型数据，找出其中的最大值、最小值，并输出平均值。(必做)
int findMax(int a[]);
int findMin(int a[]);
int sum(int a[]);

int main(){
	int a[10];
	int i,x;
	int max,min;
	float average;
	printf("请输入10组数字\n");
	for(i = 0; i < 10; i++){
		scanf("%d",&x);
		a[i] = x;
	}
		
		max = findMax(a);
		min = findMin(a);
		average = (float)sum(a) / 10;
	
	printf("最大值为%d\n",max);
	printf("最小值为%d\n",min);
	printf("平均值为%f\n",average);
	return 0;
}

int findMax(int a[]){
	int max = a[0];
	int i;
	for(i = 0;i  < 10; i++){
		if(a[i] >= max)
			max = a[i];
	}
	return max;
}

int findMin(int a[]){
	int min = a[0];
	int i;
	for(i = 0;i  < 10; i++){
		if(a[i] <= min)
			min = a[i];
	}
	return min;
}

int sum(int a[]){
	int sum = 0;
	int i;
	for(i = 0;i  < 10; i++){
		sum += a[i];
	}
	return sum;
}

