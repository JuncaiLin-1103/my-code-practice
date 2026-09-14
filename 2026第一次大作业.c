//2026第一次大作业
shouye(); 
jianyijisuanqi();
gongyueshugongbeishu();
shuzijinzita();
huoqugeshu();
shuzidaoxv();

main(){
	int falseCount =0;
	int password;
	while(falseCount < 5){
			//输入密码
	printf("密码：");
	scanf("%d", &password);
	
	
	if(password == 123){
	
	while(1){
			//首页
		system("cls");
		shouye();
	
		int record;
		int printID;
		scanf("%d",&printID);
		system("cls");
		
		if(printID == 0) {
			printf("感谢使用，再见！\n");
			return 0;
		}else if(printID==1||printID==2||printID==3||printID==4||printID==5){
			switch(printID) {
			case 1: do{ jianyijisuanqi(); printf("按1继续，按其他任意键返回主页\n");scanf("%d", &record);}while(record == 1); break;
			 
			case 2: do{ gongyueshugongbeishu(); printf("按1继续，按其他任意键返回主页\n");scanf("%d", &record);}while(record == 1); break;
			
			case 3: do{ shuzijinzita();	 printf("按1继续，按其他任意键返回主页\n");scanf("%d", &record);}while(record == 1); break;
				
			case 4: do{ huoqugeshu();  printf("按1继续，按其他任意键返回主页\n");scanf("%d", &record);}while(record == 1); break;
				
			case 5: do{ shuzidaoxv();  printf("按1继续，按其他任意键返回主页\n");scanf("%d", &record);}while(record == 1); break;
			
		}
		} else 
			printf("暂无功能！\n");
		
	}
	}
	
else{
		
		falseCount++;
		
		if(falseCount < 5){
			system("cls");
			printf("密码错误！还剩%d次输入机会\n",5-falseCount);
		}
		else printf("超过最大输入密码次数，账户冻结！！\n");
		}
		
	} 	
}

shouye(){
	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n") ;
		printf("┃欢迎来到我的工具箱             ┃\n") ;
		printf("┃1、计算器                      ┃\n") ; 
		printf("┃2、寻找最大公因数和最小公倍数  ┃\n") ; 
		printf("┃3、打印数字金字塔              ┃\n") ;
		printf("┃4、统计字符个数                ┃\n") ;
		printf("┃5、按倒序输出数字              ┃\n") ;
		printf("┃0、退出                        ┃\n") ;
		printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n") ;
}

jianyijisuanqi(){
	
		
		printf("请输入你要计算的式子：\n");
		int a,b;
		char c;
		scanf("%d%c%d",&a,&c,&b);
		switch(c){
			case '+':printf("%d\n",a+b);break;
			case '-':printf("%d\n",a-b);break;
			case '*':printf("%d\n",a*b);break;
			case '/':printf("%d\n",a/b);break;
			} 
		while(getchar()!='\n');	
	 	
		
}

gongyueshugongbeishu(){
	
		int record;
		int a,b,i;
		scanf("%d",&a);
		scanf("%d",&b);
		//最大公约数
		 if(a>=b){
	 	for(i=b;i>=1;i--){
	 	if(a%i==0 && b%i==0){
	 	printf("最大公约数是%d",i);
	 	break;
				 }
					}
		 }else{
	 		for(i=a;i>=1;i--){
	 		if(a%i==0 && b%i==0){
	 				printf("最大公约数是%d",i);
	 			break;
				 }
	 		}
		}
					 //最小公倍数
					 if(a>=b){
	 					for(i=a; ;i++){
	 				if(i%a==0 && i%b==0){
	 				printf("最小公倍数是%d",i);
	 				break;
					 }
				 }
			 } else{
	 			for(i=b; ;i++){
	 				if(i%a==0 && i%b==0){
	 				printf("最小公倍数是%d",i);
	 				break;
				 }
			}
		}
		
			
}

shuzijinzita(){
	
		int record;
					printf("请输入数字:\n");
				int i;
				int a,b;
				scanf("%d",&i);
				for(a = 1; a <= i ;a++){
				//打印空格
					for(b = 1;b <= i-a; b++ ){
							printf(" ");
						} 
				//打印数字个数 
					for(b=1 ; b <= 2*a-1;b++){
							printf("%d",a); 
						} 
							printf("\n");
					}
		
				
}
   
   huoqugeshu(){
   	
   		int record;
					char m;
	
						int a = 0,b = 0,c = 0,d = 0;
						while( (m = getchar()) != '\n'){
							if(m>='A'&&m<='Z')
								a++;
							else
							if(m>='a'&&m<='z')
								b++;
							else
							if(m>='0'&&m<='9')
								c++;
							else
								d++;
							}
						printf("大写字母%d个，小写字母%d个，数字%d个，其他字符%d个\n",a,b,c,d);
					
				
   }
   
   shuzidaoxv(){
   		
   			int record;
					printf("请输入您想倒序的数字：\n");
					int a;
					scanf("%d",&a);
					int b = 0;
					while(a % 10 != 0){
					b = b*10 + a%10;
					a = a / 10;
					}
					printf("%d\n",b);
					
				
   }
               
