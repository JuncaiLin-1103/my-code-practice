int main()
{
	char m;
	int a,b,c,d;
	a=0;b=0;c=0;
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
	printf("大写字母%d个，小写字母%d个，数字%d个，其他字符%d个",a,b,c,d);
	system("pause");
	return 0;
	 } 
