/* Insert_Order_Array_Of_While */
/*
 * 插入有序数组问题
 * 分为两种 一种为从小到大 一种为从大到小
 * 思路:将游标放在最后一个数上,用digit依次去向前(i--)比较(digit ? a[i]),
 * 如果该位条件满足,就将这个数往后移一个单位长度,
 * 如果该位条件不满足,跳出循环,并将该数存放在当前游标所指定的下一个位置上
 * 边界:如果都不满足的情况下,i = -1, a[0] = digit, 将这个数放在a[0]处, 没有问题
 * */
#include <stdio.h>
int main() {
    int a[10] = {1, 5, 7, 11, 15, 19, 23, 28, 31};
    // int a[10] = {31, 28, 23, 19, 15, 11, 7, 5, 1};
    int i = 8, digit;
    printf("Please input a digit:");
    scanf("%d", &digit);
    while (i >= 0 && a[i] > digit) { // a[i] < digit
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = digit;
    for (i = 0; i < 10; i++) {
        printf("%-5d", a[i]);
    }
    putchar('\n');
    return 0;
}
