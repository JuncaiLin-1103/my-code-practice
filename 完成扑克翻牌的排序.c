//2026 第二次大作业 扑克发牌 
#include <stdio.h>
#include <time.h>
int main(){
	//定义扑克牌 
	int a[52];
	
	int i,j;
	
	srand((unsigned)time(NULL));
	while(i<52)
	{
		int flag=0;
		int temp=rand()%52;

		for(j=0;j<i;j++)
		{
			if(temp==a[j])
				flag=1;
		}

		if(flag==0)
		{
			a[i]=temp;
			i++;
		}
	}
	
	/*rand()%52;
	for(i = 0; i < 52; i++){
		a[i] = i;
	}*/
	
	for(i = 0; i < 52; i++){
		printf("%d  ",a[i]);
	
	}
		printf("\n");
	
	int zs[13];
	int ls[13];
	int ww[13];
	int hh[13];
	
	for(i = 0 ; i < 13; i++){
		zs[i] = a[i];	
	}
	for(i = 13 ; i < 26; i++){
		ls[i-13] = a[i];
	}
	for(i = 26 ; i < 39; i++){
		ww[i-26] = a[i];
	}
	for(i = 39 ; i < 53; i++){
		hh[i-39] = a[i];
	}
	
	char hs[4]={'@','&','*','^'};
	char pk[13]={'2','3','4','5','6','7','8','9','X','J','Q','K','A'};
	
	//每个人花色及牌面
	for( i =0; i < 13; i++){
		printf("%c%c ",hs[zs[i]/13],pk[zs[i]%13]);
		
	} 
	printf("\n");
	for( i =0; i < 13; i++){
		printf("%c%c ",hs[ls[i]/13],pk[ls[i]%13]);
		
	} 
	printf("\n");
	for( i =0; i < 13; i++){
		printf("%c%c ",hs[ww[i]/13],pk[ww[i]%13]);
		
	} 
	printf("\n");
	for( i =0; i < 13; i++){
		printf("%c%c ",hs[hh[i]/13],pk[hh[i]%13]);
		
	} 
	printf("\n");
	
	//排序
	int n;
	for(n = 0; n < 13; n++){
		for(i = n+1; i < 13; i++){
			if(zs[n] < zs[i]){
				int t = zs[n];
				zs[n] = zs[i];
				zs[i] = t;
			}
		}
	} 
	
	
	for(n = 0; n < 13; n++){
		for(i = n+1; i < 13; i++){
			if(ls[n] < ls[i]){
				int t = ls[n];
				ls[n] = ls[i];
				ls[i] = t;
			}
		}
	} 
	for(n = 0; n < 13; n++){
		for(i = n+1; i < 13; i++){
			if(ww[n] < ww[i]){
				int t = ww[n];
				ww[n] = ww[i];
				ww[i] = t;
			}
		}
	} 
	for(n = 0; n < 13; n++){
		for(i = n+1; i < 13; i++){
			if(hh[n] < hh[i]){
				int t = hh[n];
				hh[n] = hh[i];
				hh[i] = t;
			}
		}
	} 
	
	//结果
	printf("zs:\n");
	for(i = 0; i < 13; i++){
		printf("%c%c ",hs[zs[i]/13],pk[zs[i]%13]);
	} 
	printf("\n");
	printf("ls:\n");
	for(i = 0; i < 13; i++){
		printf("%c%c ",hs[ls[i]/13],pk[ls[i]%13]);
	} 
	printf("\n");
	printf("ww:\n");
	for(i = 0; i < 13; i++){
		printf("%c%c ",hs[ww[i]/13],pk[ww[i]%13]);
	} 
	printf("\n");
	printf("hh:\n");
	for(i = 0; i < 13; i++){
		printf("%c%c ",hs[hh[i]/13],pk[hh[i]%13]);
	} 
	printf("\n");
		
	
	return 0;
}
	
	
	/*int i,j;
	
	//定义花色
	char a[56];
	char hongTao = 'h', heiTao = 'H',meiHua = 'm',fangPian = 'f';
	char shuzi[] ={'2','3','4','5','6','7','8','9','x','J','Q','K','A'} ;
	//确认牌面 
	for(i = 0; i < 13; i++){
		a[i] = shuzi[i];
		printf("%c",hongTao);
		printf("%c  ",a[i]);
	} 
	printf("\n");
	
	for(i = 13; i < 26; i++){
		for(j = 0; j < 13; j++){
		a[i] = shuzi[j];		
		}
		printf("%c",heiTao);
		printf("%c  ",a[i]);
	}
	*/
	

