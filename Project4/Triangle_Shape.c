/* Triangle_Shape */
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Please input the three sides of the triangle:");
    scanf("%d%d%d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("The triangle is equilateral triangle.\n");
        } else if (a == b || b == c || a == c) {
            printf("The triangle is isosceles triangle.\n");
        } else {
            printf("The triangle is regular triangle.\n");
        }
    } else {
        printf("Can't form a triangle.\n");
    }
    return 0;
}
