int main()
{
	int i;
int a[]={1, 3, 7, 9, 2, 4, 6, 8};
int x=a[0];
int y=a[0];
for(i=7;i>=0;i--)
{

if(x>=a[i])
{
	x=a[i];
}

if(y<=a[i])
{
	y=a[i];
}
}
printf("数组中最大值为：%d，最小值为：%d",y,x);
	return 0;
 } 
