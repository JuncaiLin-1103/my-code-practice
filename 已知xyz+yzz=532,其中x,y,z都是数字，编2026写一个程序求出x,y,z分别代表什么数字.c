//已知xyz+yzz=532,其中x,y,z都是数字，编写一个程序求出x,y,z分别代表什么数字
main(){
	int x , y ,z;
	for(x = 1; x < 10; x++){
		for(y = 1; y < 10; y++){
			for(z = 1; z < 10; z++){
				if((x*100 + y *10 + z) + (y*100 + z*10 +z) == 532){
					printf("%d %d %d", x, y,z);
				}
			}
		}
	}
}
