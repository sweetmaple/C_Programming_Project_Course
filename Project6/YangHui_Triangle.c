/* YangHui_Triangle */
#include <stdio.h>
int main() {
    int YangHui[10][10];
    int i, j;
    for (i = 0; i < 10; i++) {
        YangHui[i][0] = YangHui[i][i] = 1; // 第一个和最后一个数字为1
    }
    for (i = 0; i < 10; i++) {
        for (j = 1; j < i; j++) {
            YangHui[i][j] = YangHui[i - 1][j - 1] + YangHui[i - 1][j]; // 杨辉特性
        }
    }
    for (i = 0; i < 10; i++) {
        for (j = 0; j <= i; j++) { // 注意每行中有几个数是行数的个数
            printf("%-5d", YangHui[i][j]);
        }
        putchar('\n');
    }
    return 0;
}




