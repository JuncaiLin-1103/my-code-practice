//用函数实现：从键盘输入3个整数，求出其中最大数。
int shuziVS(int a, int b, int c);

main(){
	printf("请输入三个数\n");
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int m = shuziVS(a, b, c);
	printf("您输入的最大数是%d",m);
}

int shuziVS(int a, int b, int c){
	int t;
	if(a > b){
		if(a > c)
			t = a;
		else
			t = c; 
	}else
		if(b > c)
			t = b;
		else
			t = c;
	return t;
	/*if(a > b && a > c)
		return a;
	else if(b > c && b > a)
		return b;
	else if(c > a && c > b)
		return c;
		*/
		
}

