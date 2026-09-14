//统计输入一段字符，统计空格、小写字母、大写字母、数字的个数
main(){
	char m;
	
	int a = 0,b = 0,c = 0,d = 0;
	while( (m = getchar()) != '\n'){
		if(m>='A'&&m<='Z')
			a++;
		else
		if(m>='a'&&m<='z')
			b++;
		else
		if(m>='0'&&m<='9')
			c++;
		else
		d++;
	}
	printf("大写字母%d个，小写字母%d个，数字%d个，其他字符%d个",a,b,c,d);
} 
