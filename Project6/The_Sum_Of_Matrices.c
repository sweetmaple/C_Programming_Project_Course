/* The_Sum_Of_Matrices(3*4) */
#include <stdio.h>
int main() {
    int a[3][4], b[3][4], c[3][4];
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &b[i][j]);
            c[i][j] = a[i][j] + b[i][j]; // 节省循环
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%-5d", c[i][j]);
        }
        putchar('\n');
    }
    return 0;
}




