/* The_Four_Directions_Theorem */
#include <stdio.h>
#include <math.h>
int main() {
    int i, j, k, w, digit;
    printf("Please input the value of digit:");
    scanf("%d", &digit);
    for (i = 0; i <= sqrt(digit); i++) {
        for (j = 0; j <= sqrt(digit); j++) {
            for (k = 0; k <= sqrt(digit); k++) {
                for (w = 0; w <= sqrt(digit); w++) {
                    if (digit == i * i + j * j + k * k + w * w) {
                        printf("i = %d, j = %d, k = %d, w = %d\n", i, j, k, w);
                    }
                }
            }
        }
    }
    return 0;
}

