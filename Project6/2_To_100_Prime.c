/* 2_To_100_Prime(Array) */
#include <stdio.h>
#include <math.h>
int main() {
    int arr[100];
    int i, j;
    int flag;
    for (i = 0; i < 100; i++) {
        arr[i] = i + 1;
    }
    for (i = 1; i < 100; i++) {
        flag = 1;
        for (j = 2; j <= sqrt(arr[i]); j++) {
            if (arr[i] % j == 0) {
                flag = 0;
            }
        }
        if (flag) {
            printf("%-5d", arr[i]);
        }
    }
    putchar('\n');
    return 0;
}




