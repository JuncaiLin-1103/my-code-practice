//
main(){
	//2048
#include <stdlib.h>
void chushihuabox();
void suijiweizhi();
void draw();
void left();
void right();
void up();
void down();

int box[6][6] = {0};
int i,j;
int ji = 1;
 
int main(){
	srand((unsigned)time(NULL));
	suijiweizhi();
	suijiweizhi();
	draw(); 
	
	switch(getch()){
		case 'w':
		case 's':
		case 'a': { left(); draw(); break;	}
		case 'd':
		default:
	}
	
	return 0;
}


void suijiweizhi(){
	int hang = rand()%6;
 	int lie = rand()%6;
	box[hang][lie] = 2;
}

void left(){
	for(i = 0; i < 6; i++){
		for(j = 0; j < 6; j++){
			ji *= box[i][j]
			box[i][j] = 0;
			box[i][0] = ji;
		}
	}
}

void draw(){
	printf("©³©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©·\n");
	for(i = 0; i < 6; i++){
		printf("©§");
		for(j = 0; j < 6;j++){
			printf("\t");
			if(box[i][j] == 1 || box[i][j] == 0)
                printf(" ");         
            else
                printf("%d", box[i][j]);
		}
		printf("©§\n");
	}
	printf("©»©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¿\n") ;
}
}
