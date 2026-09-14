main()
{
	char a; 
	scanf("%c",&a);
	if(48<=a&&a<=59)
	printf("输入的是数字");
	else
	if(65<=a&&a<=90)
	printf("输入的是大写字母");
	else
	if(97<=a&&a<=122)
	printf("输入的是小写字母");
	else
	printf("输入的是其他符号");
	system("pause"); 
 } 
