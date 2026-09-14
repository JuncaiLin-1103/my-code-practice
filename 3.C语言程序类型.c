main(){
	//输入两个小数，计算他们的和，差，积，商并输出
	printf("------输入两个小数，计算他们的和，差，积，商并输出-------\n");
	float a;
	float b;
	printf("请输入两个小数\n");
	scanf("%f",&a);
	scanf("%f",&b);
	printf("和=%f\n",a+b);
	printf("差=%f\n",a-b);
	printf("积=%f\n",a*b);
	printf("商=%f\n",a/b);
	
//定义两个整形变量，输入两个整数给这两个变量，交换他们之中的数并输出
	printf("------定义两个整形变量，输入两个整数给这两个变量，交换他们之中的数并输出-------\n");
	printf("交换之前：a = 100 , b = 101 \n");
	int a1 = 100;
	int b1 = 101;
	int c;
	a1 = b1;
	c = a1;
	b1 = c;
	printf("交换后：a=%d,b=%d",a1,b1);
	
//输入三个小数a,b,c 交换他们中的数，把a的给B,把b的给c,把c的给a，并输入a,b,c 
	printf("------输入三个小数a,b,c 交换他们中的数，把a的给B,把b的给c,把c的给a，并输入a,b,c-------\n");
	float a2;
	float b2;
	float c2;
	float d;
	printf("请输入三个小数\n");
	scanf("%f",&a2);
	scanf("%f",&b2);
	scanf("%f",&c2);
	printf("你输入的三个数是：a=%f,b=%f,c=%f",a2,b2,c2) ;
	d = c2;
	c2 = b2;
	b2 = a2;
	a2 = d;
	printf("交换之后的数是：a=%f,b=%f,c=%f",a2,b2,c2);
	
} 

