/* Round_Off */
/*
 * 四舍五入:这里只是模拟四舍五入的操作,实际开发可以直接%.2f
 * */
#include <stdio.h>
double Round_Off(double digit) {
    int temp = (int)(digit * 1000 + 5) / 10;
    return temp / 100.0;
}
int main() {
    double digit;
    printf("Please input a digit:");
    scanf("%lf", &digit);
    double round_off_digit = Round_Off(digit);
    printf("round_off_digit = %.2f\n", round_off_digit);
    return 0;
}

