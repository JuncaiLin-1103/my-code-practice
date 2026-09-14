#include <stdio.h>

int main() {
    int a, i, j;
    printf("请输入行数: ");
    scanf("%d", &a);

    for (i = 0; i < a; i++) {
        // 打印空格：每行的空格数为 a - i - 1
        for (j = 0; j < a - i - 1; j++) {
            printf(" ");
        }
        // 打印字符：每行的字符数为 2*i+1，字符为 'A'+i
        for (j = 0; j < 2*i+1; j++) {
            printf("%c", 'A' + i);
        }
        printf("\n");
    }

    return 0;
}
