/* Bubble_Sort */
/*
 * 冒泡排序问题
 * 分为两种 一种为从小到大 一种为从大到小
 * 从前往后两两比较,n个数需要(n - 1)排序,(n - 1)次冒泡,使得最大的沉入最底端,较小的数浮上来,
 * 沉入底端的是有序区,浮在上面的是无序区,每一轮排序,都会有序区的数多一个,无序区的数少一个
 * 需要处理的部分是无序区,要使之有序
 * */
#include <stdio.h>
int main() {
    int i, j, temp, a[10];
    printf("Please input the score of 10 students:");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (a[j] > a[j + 1]) { // 从大到小:a[j] < a[j + 1]
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%-5d", a[i]);
    }
    putchar('\n');
    return 0;
}
