//求给定正整数m以内的素数之和。例如：当m=20时，函数值为77
int panDuanSuShu( m ){
	int i;
	for(i = 2; i < m ; i++){
		if(m % i ==0)
			return 0;
	}
	return 1;
}

int fun(int m)
{
	if(m == 2)
		return 2;
  return fun(m-1)+( panDuanSuShu( m ) ? m : 0); 
}
main()
{
  int y;
  y=fun(20);
  printf("y=%d\n",y);
}
