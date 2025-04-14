/* Leap_Year */
#include <stdio.h>
int main() {
    int year;
    for (year = 1900; year <= 2500; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            printf("%d is leap year.\n", year);
        }
    }
    return 0;
}
