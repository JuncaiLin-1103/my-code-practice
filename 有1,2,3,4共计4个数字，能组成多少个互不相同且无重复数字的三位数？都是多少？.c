//有1,2,3,4共计4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
main(){
	int i,j,k;
	for(i = 1; i < 5; i++){
		for(j = 1; j < 5; j++){
			if( i != j){
				for(k = 1; k < 5; k++){
					if(k != i && k != j){
						printf("%d%d%d\n",i,j,k);
					}
					continue;
				}
				}
			continue;
			}
			
		
	}
}
