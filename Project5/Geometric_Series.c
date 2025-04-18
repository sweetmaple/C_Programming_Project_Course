/* Geometric_Series */
#include <stdio.h>
int main() {
    int i, n, s = 0, a = 5;
    printf("Please input the value of n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        s += a;
        a *= 2;
    }
    printf("s = %d\n", s);
    return 0;
}

