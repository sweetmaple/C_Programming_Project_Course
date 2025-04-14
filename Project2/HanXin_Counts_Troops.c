/* HanXin_Counts_Troops */
#include <stdio.h>
int main() {
    int x;
    for (x = 50000; x <= 60000; x++) {
        if (x % 3 == 1 && x % 5 == 2 && x % 7 == 4 && x % 13 == 6) {
            printf("x = %d\n", x);
        }
    }
    return 0;
}
