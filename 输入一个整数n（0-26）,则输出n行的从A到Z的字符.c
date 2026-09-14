// 输入一个整数n（0-26）,则输出n行的从A到Z的字符例如:输入3,则输出（北软C语言结业设计题）
main(){
	int n;
	char c = 97;
	printf("请输入0~26任意数字\n");
	scanf("%d",&n);
	//开始打印
	int i,j; 
	for(i = 1;i <= n; i++){
		//打印空格
		for(j = 0; j < n-i ; j++)
			printf(" ");
			//打印字母个数 
			for(j = 0; j < 2*i-1 ;j++){
				//打印字母 
				printf("%c",c);
			}	
			c++;
			printf("\n");
		
	}
}
