/* Data_Overflow */
/*
 * 数据溢出:有符号短整型数据的溢出
 * a 0111 1111 1111 1111    2^15 - 1
 * b 1000 0000 0000 0000    -2^15(补码相关知识,详见计算机组成原理)
 * */
#include <stdio.h>
int main() {
    short a, b;
    a = 32767;
    b = a + 1;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
