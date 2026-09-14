main()
{

	int choice;
	srand(time(0));
	printf("1：猜数游戏，2：北软作业，3：最大公约数最小公倍数,4:计算元素个数,5:求出分数裂项n的和");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
	{
			
	printf("猜数游戏");		
	int x,a;
	x=rand()%101;
	printf("请输入一个100以内的数字\n");
	do
	{
	scanf("%d",&a);
	if(a>x)
	printf("猜大了\n");
	else
	if(a<x)
	printf("猜小了\n");
	if(a==x)
	printf("猜对啦！\n");
	 
	 }
	 while(a!=x);
	break;
	}
	
		case 2:
		{
		printf("北软作业");	
		
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
	break;
}

	case 3:
		{
	printf("最大公约数最小公倍数");	
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
	int i=b,n=a%i,m=b%i;
	while (n==0&&m==0&&b>=1)
{
		printf("最大公约数为：%d",i);
	printf("最小公倍数为：%d",a*b/i);
	
}
	b--;	
	}
	else
	if(a<b)
	{
	int i=a,n=b%i,m=a%i;
	while (n==0&&m==0&&a>=1)
{
		printf("最大公约数为：%d",i);
	printf("最小公倍数为：%d",a*b/i);
	
	}
	a--;	
	}
	system("pause"); 
	break;
 } 
 
 
 		case 4:
 		{
 		printf("计算元素个数");
	char m;
	int a,b,c,d;
	a=0;b=0;c=0;
	if(m>='A'&&m<='Z'||m>='a'&&m<='z')
	a++;
	else
	if(m==' ')
	b++;
	else
	if(m>='0'&&m<='9')
	c++;
	else
	d++;
	printf("英文字母%d个，空格%d个，数字%d个，其他字符%d个",a,b,c,d);
	system("pause");
	break;
	 } 
	 
	 case 5:
	 	{
	 		printf("求出分数裂项n的和");
	int n;
	double sum=0.0,a=1.0,b=2.0,c;
	scanf("%d",&n);
	while(n>0)
	{
		sum+=a/b;
		c=a+b;
		a=b;
		b=c;
		n--;
	}
	printf("%f",sum);
	system("pause");
	break;
}
	}
	
}
