//≤‚ ‘
#include <stdio.h>
int i,j,k;
int box[9][3] = {0};
void hanoi(int x ,char a,char b,char c, int arr[][3]);
void draw(int arr[][3]);
char a = 'A',b = 'B',c = 'C';
int gettopA();
int gettopB();
int gettopC();
int moveAC(){
	int a1=gettopA();
	int a2=gettopC();
	box[a2][2] = box[0][a1];
}
int moveAB(){
	int a1=gettopA();
	int a2=gettopB();
	box[a2][1] = box[0][a1];
}

int moveBC()
{
	int a1=gettopB();
	int a2=gettopC();
	box[a2][2] = box[a1][1];
}
int main(){
	
	
	int getshuzi;
	scanf("%d",&getshuzi);
	
	printf("©≥©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©∑\n");
/*	for( i = 0; i < 9; i++){
		for(j = 0; j < 3;j++){
			printf("©ß");
			for(k = 1; k <=3 ; k++){
				box[i][j] = k;
				printf("\t%d   ",box[i][j]);
			}
			printf("\t©ß\n");
		}
	}*/
	for( i = 0; i < 9; i++){
		if(i == 9-getshuzi){
			for(k = 1; k <=getshuzi ; k++){
				box[i][0] = k;
				i++;
			}
		}
	}
	for(i = 0; i < 9; i++){
		printf("©ß");
		for(j = 0; j < 3;j++){
			printf("\t%d   ",box[i][j]);
		}
		printf("\t©ß\n");
	}
	
	printf("©ß\t%c\t%c\t%c\t©ß\n",a,b,c) ;
	printf("©ª©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©ø\n") ;
	
	hanoi( getshuzi ,a, b,c,box);
	
	
	return 0;
} 

void hanoi(int x ,char a,char b,char c,int arr[][3]){
	
	
	if(x == 1){
		printf("%c --> %c\n",a,c);
		moveAC();
		draw(box);
		
	}
		
		
	else{
		hanoi( x -1, a, c, b,box);
		printf("%c --> %c\n",a,c);
		hanoi( x -1, b, a, c,box);
	}
	
	
}

int gettopA(){
	for ( i = 0; i < 9; i++) {
        if (box[i][0] != 0) return i;
    }
    return 9; 
}
int gettopB(){
	for ( i = 0; i < 9; i++) {
        if (box[i][1] != 0) return i;
    }
    return 9; 
}
int gettopC(){
	for ( i = 0; i < 9; i++) {
        if (box[i][2] != 0) return i;
    }
    return 9; 
}

void draw(int arr[][3]){
	printf("©≥©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©∑\n");
	printf("00000000000\n");
	
	for(i = 0; i < 9; i++){
		printf("©ß");
		for(j = 0; j < 3;j++){
			printf("\t%d   ",box[i][j]);
		}
		printf("\t©ß\n");
	}
	
	printf("©ß\t%c\t%c\t%c\t©ß\n",a,b,c) ;
	printf("©ª©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©•©ø\n") ;
}


