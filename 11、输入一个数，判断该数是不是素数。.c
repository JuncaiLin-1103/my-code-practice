int main()
{
	int x,i;
	printf("请输入一个你想判定的数\n");
	scanf("%d",&x);
	for(i=2;i<x;i++)
		{
			if(x%i==0)
			{
				printf("不是素数");
				break;
			}
			else
			{
				printf("是素数");
			}
		}
	return 0;
 } 
