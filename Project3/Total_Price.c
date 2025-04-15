/* Total_Price */
#include <stdio.h>
int main() {
    int count;
    float unit_price, total_price;
    printf("Please input the unit price of the product:");
    scanf("%f", &unit_price);
    printf("Please input the counts of the product:");
    scanf("%d", &count);
    total_price = unit_price * count;
    printf("Total price is %f\n", total_price);
    return 0;
}
