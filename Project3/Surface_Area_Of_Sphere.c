/* Surface_Area_Of_Sphere */
#include <stdio.h>
#include <math.h>
#define PI 3.14
int main() {
    float r;
    double area;
    printf("Please input the radius of the sphere:");
    scanf("%f", &r);
    area = 4 * PI * pow(r, 2); // Area = 4 * PI * r * r;
    printf("Sphere's surface area is %f\n", area);
    return 0;
}
