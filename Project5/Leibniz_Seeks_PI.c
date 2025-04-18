/* Leibniz_Seeks_PI */
#include <stdio.h>
#include <math.h>
int main() {
    float term = 1.0, sum = 0.0;
    int denominator = 1, flag = 1;
    while (fabs(term) >= 1e-6) { // fabs():绝对值函数
        sum += term;
        denominator += 2;
        flag *= (-1); // flag = -flag;
        term = 1.0 * flag / denominator; // * 1.0:解决整除问题
    }
    printf("PI = %f\n", 4 * sum);
    return 0;
}

