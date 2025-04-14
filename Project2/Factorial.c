/* Factorial */
long Factorial(int n) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return 1;
    } else {
        return n * Factorial(n - 1);
    }
}
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%d's factorial is %ld\n", n, Factorial(n));
    return 0;
}
