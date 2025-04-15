/* Toggle_Case */
#include <stdio.h>
int main() {
    char c1, c2;
    printf("Please input a capital letter:");
    c1 = getchar(); // scanf("%c", &c1);
    c2 = c1 + 32;
    printf("The corresponding lowercase letter is:");
    putchar(c2); // printf("%c", c2);
    putchar('\n'); // putchar没有自动换行的功能
    return 0;
}
