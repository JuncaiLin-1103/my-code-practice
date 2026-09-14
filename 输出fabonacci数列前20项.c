//输出fabonacci数列前20项
/*
int fabonacci(int i);

main(){
	int a;
	for(a = 1; a <= 20; a++)
	printf("%d\t",fabonacci(a));
	
	return;
} 

int fabonacci(int i){

	if(i == 1 || i == 2) 
		return 1;
	return fabonacci(i - 2) + fabonacci(i - 1);
}
*/

///*
fabonacci(int i);

main(){
	int i;
	scanf("%d",&i);
	fabonacci(i);
}

fabonacci(int i){
	int a , b,m;
	for(m = 1; m <= i; m++){
		if(m == 1 )
			printf("1\t");
		else{
			b = b + a;
			a = b - a;
			printf("%d\t",b);
		}
		
		
	}
}
//*/
