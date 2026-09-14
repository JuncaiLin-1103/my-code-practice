GONGSHI();
int GONGSHI(int n,int m)
{
	int s=0;
	while(n<m)
	{
	s=s+n;
	n++;
	}
	if(n==m)
	{
	s=s+m;
	}
	return s;
	
}

int main()
{
	printf("n= ");
	printf("m= \n");
	int n,m;
	scanf("%d %d",&n,&m);
	int zhi=GONGSHI(n,m);
	printf("%d",zhi);
	return 0;
 } 
