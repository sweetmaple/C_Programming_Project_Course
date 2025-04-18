/* Luggage_Check */
#include <stdio.h>
int main() {
    float weight, price;
    printf("Please input the weight of your luggage:");
    scanf("%f", &weight);
    if (weight < 0) {
        printf("Input error.\n");
    } else if (weight <= 20) {
        printf("Free.\n");
    } else if (weight <= 30) {
        price = (weight - 20) * 30;
        printf("price = %f\n", price);
    } else if (weight <= 40) {
        price = 10 * 30 + (weight - 30) * 40;
        printf("price = %f\n", price);
    } else if (weight <= 50) {
        price = 10 * 30 + 10 * 40 + (weight - 40) * 50;
        printf("price = %f\n", price);
    } else {
        printf("Not allowed to carry.\n");
    }
    return 0;
}

