/* Quadratic_Equation */
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, dalt, x1, x2;
    printf("Please input the value of a, b, c:");
    scanf("%f%f%f", &a, &b, &c);
    dalt = b * b - 4 * a * c;
    if (dalt > 0) {
        x1 = (-b + sqrt(dalt)) / (2 * a);
        x2 = (-b - sqrt(dalt)) / (2 * a);
        printf("x1 = %f, x2 = %f\n", x1, x2);
    } else if (dalt == 0) {
        x1 = x2 = -b / (2 * a);
        printf("x1 = %f, x2 = %f\n", x1, x2);
    } else {
        printf("The equation has no real roots.\n");
    }
    return 0;
}

