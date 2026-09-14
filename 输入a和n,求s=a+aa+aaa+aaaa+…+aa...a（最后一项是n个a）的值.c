//.输入a和n,求s=a+aa+aaa+aaaa+…+aa...a（最后一项是n个a）的值，其中a是一个数字。例如2+22+222+2222+22222(此时有5个数相加)，几个数相加有键盘控制（竞赛）。
main(){
	int a,n,i;
	scanf("%d %d",&a,&n);
	int s = 0,b = a;
	for(i = 0; i < n; i++){
		s = s + a;
		a = a*10+b;
	}
	printf("%d",s);
}
