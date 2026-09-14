#include <stdio.h>
#include <stdio.h>

void hanoi(int x, char a, char b, char c);

int main() {
    int x;
    
    scanf("%d", &x);
    int i;
	for( i = 1; i <= x; i++)
		printf("%d\n",i);
    hanoi(x, 'A', 'B', 'C');
    return 0;
}

void hanoi(int x, char a, char b, char c) {

	
    if (x == 1) {
        printf("%c --> %c\n", a, c);
        
    } else {
        hanoi(x - 1, a, c, b);
        printf("%c --> %c\n", a, c);
        hanoi(x - 1, b, a, c);
    }
}
