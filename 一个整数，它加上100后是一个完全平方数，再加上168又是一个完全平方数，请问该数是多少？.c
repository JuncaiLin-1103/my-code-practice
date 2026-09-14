int main()
{
	int a=1,i;
	int x,y;
	for(a=1; ;a++)
	{
	x=0;
	y=0;
	
	for(i=1;i<a+100;i++)
		{
		if(i*i==a+100)
			{
			x=1;
			break;
			}	
		}
	for(i=1;i<a+168;i++)
		{
		if(i*i==a+168)
			{
			y=1;
			break;
			}
		}
		if(x==1&&y==1)
		break;
	}	
	printf("%d",a);
	return 0;
}
