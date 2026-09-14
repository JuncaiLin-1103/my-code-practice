int main()
{
	int a,i,b;
	char x='A'+i;
	scanf("%d",&a);
	
	for(i=0;i<a;i++)
	{
		for(b=0;b<a-i-1;b++)
		{
		printf(" ");
		}
	
		for(b=0;b<2*i+1;b++)
		{
		printf("%c",'A'+i);
		}
		
		printf("\n");
	}

	
	return 0;
 } 
