int main()
{
	int x;
	printf("请输入一个五位数：");
	scanf("%d",&x);
	printf("万位数是：%d\n",x/10000);
	printf("千位数是：%d\n",x/1000%10);
	printf("百位数是：%d\n",x/100%10);
	printf("十位数是：%d\n",x/10%10);
	printf("个位数是：%d\n",x%10);
	return 0;
}
