JIECHENG();

JIECHENG(int x)
{

	
	if(x==1)
	{
		printf("%d",x);
		return 1;
	}
	int a=JIECHENG(x-1);
	printf("*%d",x);
	return a * x;
	
}



int main()
{
	int x=5;
	printf("=%d",JIECHENG(x));
	
	return 0;
 } 
