int main()
{
	char a;
	printf("请输入任意一个字符进行判断\n"); 
	scanf("%c",&a);
	if(a>=48&&a<=57)
	{
		printf("数字\n");
	}
	else
	if(a>=65&&a<=90)
	{
		printf("大写字母\n");
	}
	else
	if(a>=97&&a<=122)
	{
		printf("小写字母\n");
	}
	else
	{
		printf("其他字母\n");
	}
	return 0;
}
