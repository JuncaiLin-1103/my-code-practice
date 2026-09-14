int main()
{
	int sum=0,n=1;

	while(n<100)
		{
		sum+=n;
		if(sum<100)
		n++;
		else
		break;
		}
	printf("%d",n);
		system("pause");
		return 0;
 } 
