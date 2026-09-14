//将一个二维数组行和列元素互换，存到另一个二维数组中，即矩阵转置。

int main(){
	int a[2][3] = {{1,2,3},{4,5,6}};
	int b[3][2];
	int i,j;

	for(i = 0; i < 2 ; i++){
		for(j = 0; j < 3; j++){
			
			b[j][i] = a[i][j];
		}
		
	}
	 printf("原来：\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    
     printf("现在：\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    
    return 0;
}
