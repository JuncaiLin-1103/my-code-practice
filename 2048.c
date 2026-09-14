//2026加法2048游戏 
#include <stdio.h> 


void suijiweizhi();
void draw();
void left();
void right();
void up();
void down();

int box[6][6] = {0};
int i,j;
int ifwin();

 
int main(){
	chushihuabox();
	srand((unsigned)time(NULL));
	for(i = 0; i < 2; i++){
		suijiweizhi();
	} 
	
	while(1){
		draw(); 
		int shuru = getch();
		switch(shuru){
			case 'w':{ up(); draw(); break;}
			case 's':{ down(); draw(); break;}
			case 'a':{ left(); draw(); break;}
			case 'd':{ right(); draw(); break;}
		}
		if(shuru == 'w' || shuru == 's' || shuru == 'a' || shuru == 'd'){
    		suijiweizhi();
    	}
		
		int win = ifwin();
		if(win == 0){
			printf("恭喜你合成了2048！！\n");
			break;
		}
			
	}
	return 0;
}


void suijiweizhi(){
	int suiji =  rand()%6;
	int NPCshu;
	if((suiji + 1) % 3 == 0)
		NPCshu = 2;
	else NPCshu = 4;
	
	while(1){
		int hang = rand()%6;
 		int lie = rand()%6;
 		if(box[hang][lie] == 0){
            box[hang][lie] = NPCshu;
            break;
	}
	}
}

void left(){
	for(i = 0; i < 6; i++){
		int ji = 1;
		for(j = 0; j < 6; j++){
		if(box[i][j] != 1)	ji *= box[i][j];
		}
		for(j = 0; j < 6; j++){
			box[i][j] = 1;	
		}
			box[i][0] = ji;
		}
	}


void right(){
	for(i = 5; i >= 0; i--){
		int ji = 1;
		for(j = 5; j >= 0; j--){
			if(box[i][j] != 1) ji *= box[i][j];
		}
		for(j = 5; j >= 0; j--){
			box[i][j] = 1;	
		}
			box[i][5] = ji;
		}
	}


void up(){
	for(i = 0; i < 6; i++){
		int ji = 1;
		for(j = 0; j < 6; j++){
			if (box[j][i] != 1)ji *= box[j][i];	
		}
		for (j = 0; j < 6; j++) {
            box[j][i] = 1; 
        }
			box[0][i] = ji;
		}
	}


void down(){
	for (i = 0; i < 6; i++) {
        int ji = 1;
        for (j = 0; j < 6; j++) {
            if (box[j][i] != 1) ji *= box[j][i]; 
        }
        for (j = 0; j < 6; j++) {
            box[j][i] = 1; 
        }
        box[5][i] = ji; 
    }
}

void draw(){
	system("cls");
	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	for(i = 0; i < 6; i++){
		printf("┃");
		for(j = 0; j < 6;j++){
		
			if(box[i][j] == 1)
                printf(" \t");         
            else
                printf("%d\t", box[i][j]);
		}
		printf(" ┃\n");
	}
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n") ;
}

int ifwin(){
	int mubiaoshu;
		for(i = 0; i < 6; i++){
		for(j = 0; j < 6;j++){
				mubiaoshu = box[i][j] ;
				if(mubiaoshu == 2048)
					return 0;	
		}
	}
	return 1;
		
}
