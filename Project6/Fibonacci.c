/* Fibonacci */
#include <stdio.h>
int main() {
    int fibonacci[20], i;
    fibonacci[0] = fibonacci[1] = 1;
    for (i = 2; i < 20; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    for (i = 0; i < 20; i++) {
        if (i && i % 5 == 0) {
            putchar('\n');
        }
        printf("%-5d", fibonacci[i]);
    }
    putchar('\n');
    return 0;
}
