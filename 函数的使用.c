caishu();
caishu(){
	system("cls");
					srand(time(0));
					int shuziyouxi,shuziyouxishuru;
					shuziyouxi=rand()%101;
					printf("请输入一个100以内的数字\n");
					do
					{
					scanf("%d",&shuziyouxishuru);
					if(shuziyouxishuru>shuziyouxi)
					printf("猜大了\n");
					else
					if(shuziyouxishuru<shuziyouxi)
					printf("猜小了\n");
					if(shuziyouxishuru==shuziyouxi)
					printf("猜对啦！\n");
					 }
					 while(shuziyouxishuru!=shuziyouxi);
					 system("pause");
}
JIUJIU();
JIUJIU(){
		system("cls");
					int diyipai,dierpai;
					for(diyipai=1;diyipai<=9;diyipai++)
					{
					for(dierpai=1;dierpai<=diyipai;dierpai++)
					printf("%2d*%2d=%2d",diyipai,dierpai,diyipai*dierpai);
					printf("\n");
					}		
				system("pause");
}
BEIRUAN();
BEIRUAN(){
	system("cls");
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
					system("pause");
}
GONGBEISHU();
GONGBEISHU(){
		system("cls");
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
}
JISUANQI();
JISUANQI(){
	system("cls");
					printf("请输入你想要计算的式子"); 
					int a,b;
					char c;
					scanf("%d%c%d",&a,&c,&b);
					if (c=='+')
					printf("%d+%d=%d",a,b,a+b);
					else
					if (c=='-')
					printf("%d-%d=%d",a,b,a-b);
					else
					if (c=='*')
					printf("%d*%d=%d",a,b,a*b);
					else
					if (c=='/')
					printf("%d/%d=%d",a,b,a/b);	
					system("pause");
}

main()
{
		printf("请输入密码：");
	int mima;
	scanf("%d",&mima);
	while(mima!=123123)
		{
		printf("密码错误，请重新输入");
		printf("请输入密码：\n");
		scanf("%d",&mima);
		}
		


	
	printf("密码正确，进入我的程序"); 


	
	int abb;
	do
	{
			system("cls");
		printf("1:猜数游戏；2：打印99乘法表；3：北软结业试题；4：求最小公倍数最大公因数；5：计算器；0：退出");
		int shuzi;
		scanf("%d",&shuzi);
		switch(shuzi)
		{
			case 1:
				{
					caishu();
					abb=1;
					break;
				}
			case 2:
				{
					JIUJIU();
					abb=1;
					break;
				}
			case 3:
				{
					BEIRUAN();
					abb=1;
					break;
				}
			case 4:
				{
					GONGBEISHU();
					abb=1;
					break;
				}
			case 5:
				{
					JISUANQI();
					abb=1;
					break;
				}
			case 0:
				abb=0;
				break;
		}
	}
	while (abb==1);
	printf("\n"); 
}


