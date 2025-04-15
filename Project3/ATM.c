/* ATM */
#include <stdio.h>
int main() {
    int password, money;
    printf("Please input your password:");
    scanf("%d", &password);
    printf("Please input your withdrawal amount:");
    scanf("%d", &money);
    printf("Your withdrawal amount is %d\n", money);
    printf("Transaction completed, please retrieve your card.\n");
    return 0;
}
