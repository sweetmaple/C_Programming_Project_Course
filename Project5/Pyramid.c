/* Pyramid */
#include <stdio.h>
int main() {
    int i, j, height;
    printf("Please input the height of pyramid:");
    scanf("%d", &height);
    for (i = 1; i <= height; i++) {
        for (j = height - 1; j >= i; j--) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        putchar('\n');
    }
    return 0;
}

