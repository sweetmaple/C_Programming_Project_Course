/* Convert_Decimal_To_Binary */
#include <stdio.h>
int main() {
    int digit[32] = {0}, decimal, binary_cursor = 31, i;
    printf("Please input digit decimal number:");
    scanf("%d", &decimal);
    while (decimal) {
        digit[binary_cursor--] = decimal % 2;
        decimal /= 2;
    }
    for (i = 0; i < 32; i++) {
        if (i && i % 4 == 0) {
            printf(" ");
        }
        printf("%d", digit[i]);
    }
    putchar('\n');
    return 0;
}
