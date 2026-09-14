//digui编写程序求1+2+3+…+n值并输出。
int add(int n);

main(){
	int n;
	scanf("%d",&n);
	printf("%d",add(n));
}

int add(int n){
	if(n == 1)
		return 1;
	return add(n-1)+n;
}
