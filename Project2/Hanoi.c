/* Hanoi */
/*
 * 汉诺塔问题(递归问题)
 * 思路:先把上面前(n - 1)个盘从A借助C移动到B,再将第n个盘从A移动到C,再把那(n - 1)个盘从B借助A移动到C,
 * 递归出口是只有一个盘时,直接从A移动到C
 * 要注意的是每一次递归A, B, C三个参数代表的柱子都在不停地跳动,printf里面从A -> C的输出,
 * 其实真正打印出来的各种移动情况都有,函数本身参数是定死的,但是这三个参数却可以代表不同的真实的具体
 * 哪个柱子的盘子进行移动,参数的位置代表的是移动的思想
 * */
#include <stdio.h>
void Hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        printf("%c -> %c\n", A, C);
    } else {
        Hanoi(n - 1, A, C, B);
        printf("%c -> %c\n", A, C);
        Hanoi(n - 1, B, A, C);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    Hanoi(n, 'A', 'B', 'C');
    return 0;
}
