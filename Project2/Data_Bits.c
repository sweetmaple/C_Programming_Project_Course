/* Data_Bits */
#include <stdio.h>
int main() {
    int digit, qian, bai, shi, ge;
    printf("Please input the digit:");
    scanf("%d", &digit);
    qian = digit / 1000;
    bai = digit / 100 % 10;
    shi = digit / 10 % 10;
    ge = digit % 10;
    printf("qian is %d, bai is %d, shi is %d, ge is %d\n", qian, bai, shi, ge);
    return 0;
}
