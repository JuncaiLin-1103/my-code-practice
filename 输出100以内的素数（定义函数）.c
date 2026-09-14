int isSS();

int isSS(int x)
{
	int i;
	for(i=2;i<x;i++)
		{
		if(x%i==0) return 0;
		}
	return 1;
}

int main()
{
	int x;
	for(x=2;x<=100;x++) 
	if( isSS(x)==1) printf("%d  ",x);
	return 0;
}
