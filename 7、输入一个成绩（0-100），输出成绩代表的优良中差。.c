int main()
{
	int a;
	printf("请输入你的成绩\n");
	scanf("%d",&a);
	if(a>=90&&a<=100)
	{
		printf("优秀");
	}
	else
	if(a>=80&&a<90)
	{
		printf("良");
	}
	else
	if(a>=60&&a<80)
	{
		printf("中");
	}
	else
	{
		printf("差");
	}
	 
	return 0;
}
