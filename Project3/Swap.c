/* Swap */
#include <stdio.h>
int main() {
    int a, b, temp;
    printf("please input the values of a and b:");
    scanf("%d%d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
