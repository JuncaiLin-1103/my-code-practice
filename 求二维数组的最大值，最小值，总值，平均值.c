//求二维数组的最大值，最小值，总值，平均值
int findMax(int a[][]);
int findMin(int a[][]);
int sum(int a[][]);

int main(){
	int a[2][4] = {{3,4,7,10},{5,1,9,6}};
	printf("最大值为：%d\n",findMax(a));
	printf("最小值为：%d\n",findMin(a));
	printf("总值为：%d\n",sum(a));
	printf("平均值为：%f\n",(float)sum(a)/8);
	return 0;
}

int findMax(int a[][]){
	int i,j;
	int t = 0;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 4;j++){
			if(a[i][j] > t)
				t = a[i][j];
		}
	}
	return t;
}

int findMin(int a[][]){
	int i,j;
	int t = 65536;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 4;j++){
			if(a[i][j] < t)
				t = a[i][j];
		}
	}
	return t;
}

int sum(int a[][]){
	int i,j;
	int sum = 0;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 4;j++){
			sum += a[i][j];
		}
	}
	return sum;
}
