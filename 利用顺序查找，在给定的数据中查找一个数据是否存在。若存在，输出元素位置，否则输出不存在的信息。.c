//利用顺序查找，在给定的数据中查找一个数据是否存在。若存在，输出元素位置，否则输出不存在的信息。
int findarr(int x);

main(){
	
	int x;
	scanf("%d",&x);
	int result;
	result = findarr(x);
	if(result != 0)
		printf("存在，在第%d个",result);
	else
		printf("不存在"); 
}

int findarr(int x){
	int a[5] = { 1,2,3,4,5};
	int i;
	for(i = 0; i <=4; i++){
		if( x == a[i])
			return i+1;
	}
	return 0;
}
