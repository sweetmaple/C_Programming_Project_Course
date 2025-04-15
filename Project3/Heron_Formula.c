/* Heron_Formula */
/*
 * 海伦公式:已知三角形a, b, c三条边的长度可求该三角形的面积
 * */
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, s;
    double area;
    printf("Please input the lengths of the three sides of the triangle:");
    scanf("%f%f%f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Triangle's area is %f\n", area);
    return 0;
}
