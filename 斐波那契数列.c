int main()
{
	int a=1,b=1,i=1,c;
	printf("1¡¢1");
	while(i<19)
	{
		c=a+b;
		a=b;
		b=c;
		printf("¡¢%d",c);
		i++;
		
	}
	return 0;
 } 
