//图形汉诺塔
int shouye();
void zhanshi(int x);
void draw();
int findtop(int lieshu);
void move(int a, int b);
void hanoi(int x,char a,char b,char c);

char a = 'A', b = 'B', c = 'C';
int i,j,k;
int box[9][3];
void yanshi();

int main(){
	//输入个数
	int x = shouye();
	if(x > 0 && x <= 9)
		zhanshi(x);
		draw();
		hanoi(x,a,b,c);
	return 0;
} 
//首页输入盘子个数 
int shouye(){
	printf("请输入盘子个数（1 ~ 9）：\n");
	int shuru;
	scanf("%d",&shuru);
	if(shuru > 0 && shuru < 10){
		system("cls");
		return shuru;
	}
	else
	return 0;
} 
//第一次输入展示
 void zhanshi(int x){
 	
 		for( i = 0; i < 9; i++){
		if(i == 9-x){
			for(k = 1; k <=x ; k++){
				box[i][0] = k;
				i++;
			}
		}
	}
	
 }
 
 int findtop(int lieshu){
 
 	for(i = 0; i<9; i++){
 		if(box[i][lieshu] != 0)
 			return i;
	 }
	return  -1;
 }
 
 void move(int a, int b){
 	
 	int a1 = findtop(a);
 	int a2 = findtop(b);
 	if(a2 == -1)
 		a2 = 8;
	else a2 -= 1;
	box[a2][b] = box[a1][a];
	box[a1][a] = 0;
 }
 
void draw(){
	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	for(i = 0; i < 9; i++){
		printf("┃");
		for(j = 0; j < 3;j++){
			if(box[i][j] == 0)
                printf("\t    ");         
            else
                printf("\t%d   ", box[i][j]);
		}
		printf("\t┃\n");
	}
	
	printf("┃\t%c\t%c\t%c\t┃\n",a,b,c) ;
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n") ;
	yanshi();
	system("cls");
}

void hanoi(int x,char a,char b,char c){
	if(x == 1){
		printf("%c --> %c\n", a, c);
		move(a - 'A',c - 'A');
		draw();
	}
	else{
		hanoi(x-1,a,c,b);
		printf("%c --> %c\n", a, c);
		move(a - 'A',c - 'A');
		draw();
		hanoi(x-1,b,a,c);
	}
}

void yanshi(){
	int i;
	int yanshiqi;
	for(i = 0; i < 10000000000000000000000000000000000000000000000000000000;i++ )
	yanshiqi *= 2;
	  
}
