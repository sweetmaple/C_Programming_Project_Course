/* Row_Column_Conversion */
#include <stdio.h>
int main() {
    int i, j;
    int a[2][3], b[3][2];
    printf("Please input a determinant of 2 * 3:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Primitive matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%-5d", a[i][j]);
        }
        putchar('\n');
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            b[j][i] = a[i][j];
        }
    }
    printf("Transposed matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%-5d", b[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
