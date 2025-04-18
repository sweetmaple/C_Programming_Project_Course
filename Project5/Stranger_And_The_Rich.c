/* Stranger_And_The_Rich */
#include <stdio.h>
int main() {
    int money_one = 1, money_two = 100000, sum_one = 1, sum_two, i;
    for (i = 2; i <= 30; i++) {
        money_one *= 2;
        sum_one += money_one;
    }
    sum_one /= 100;
    printf("sum_one = %d\n", sum_one);
    sum_two = money_two * 30;
    printf("sum_two = %d\n", sum_two);
    if (sum_one > sum_two) {
        printf("Stranger.\n");
    } else if (sum_one == sum_two) {
        printf("Same.\n");
    } else {
        printf("Rich man.\n");
    }
    return 0;
}

