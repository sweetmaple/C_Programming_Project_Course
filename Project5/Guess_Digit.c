/* Guess_Digit */
#include <stdio.h>
int main() {
    int i, j, digit;
    for (i = 0; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            digit = 6 * 10000 + i * 1000 + j * 100 + 4 * 10 + 2;
            if (digit % 57 == 0 && digit % 67 == 0) {
                printf("digit = %d\n", digit);
            }
        }
    }
    return 0;
}

