//二维数组行列交换

int main(){
	int a[3][4] = {{0,1,2},{3,4,5},{6,7,8}};
	int b[4][3];
	int i,j;
	
	for( i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			b[j][i] = a[i][j];
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("交换后：\n");
	
	for( i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
		
} 
