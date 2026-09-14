//2048
#include <stdlib.h>
void suijiweizhi();
void draw();

int box[6][6] = {0};
int i,j;
 
int main(){
	suijiweizhi();
	suijiweizhi();
	draw();
	return 0;
}

void suijiweizhi(){
	int hang = rand()%6;
 	int lie = rand()%6;
	box[hang][lie] = 2;
}

void draw(){
	printf("©³©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©·\n");
	for(i = 0; i < 6; i++){
		printf("©§");
		for(j = 0; j < 6;j++){
			if(box[i][j] == 0)
                printf("\t    ");         
            else
                printf("\t%d   ", box[i][j]);
		}
		printf("\t©§\n");
	}
	printf("©»©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¥©¿\n") ;

}
