/* 2_To_100_Prime */
#include <stdio.h>
#include <math.h>
int main() {
    int i, j, flag;
    for (i = 2; i <= 100; i++) {
        flag = 1;
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("%-5d", i);
        }
    }
    putchar('\n');
    return 0;
}

