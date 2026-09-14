int main()
{
	int i,x=0,a[5]={8,6,5,4,1},b[5];
	/*
	for(i = 0; i < 5; i ++)
		b[4-i] = a[i];
	
	for(i = 0; i < 5; i ++)
		printf("%d ", b[i]);
		
	*/	
	for(i = 0; i < 5 / 2; i ++)
	{
		x = a[ i ];
		a[ i ] = a[ 4 - i ];
		a[ 4 - i ] = x; 
	}

	for(i = 0; i < 5; i ++)
		printf("%d ", a[i]);
		/*
	
	for(i=4;i>=0;i--)
	{
	 b[x]=a[i];
	printf("%d",b[x]);
	 x++;
	}
*/
		
	return 0;
}
