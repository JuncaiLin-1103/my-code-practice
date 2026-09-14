#include<time.h>
int main()
{
	srand(time(0));
	int x,a;
	x=rand()%101;
	printf("请输入一个100以内的数字\n");
	do
	{
	scanf("%d",&a);
	if(a>x)
	printf("猜大了\n");
	else
	if(a<x)
	printf("猜小了\n");
	if(a==x)
	printf("猜对啦！\n");
	 
	 }
	 while(a!=x);
	 
	return 0;
}
