/* Sum_Days_Of_Year_Month_Day */
#include <stdio.h>
int main() {
    int month_tab[2][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                            {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    int year, month, day, sum_days;
    int leap;
    int i;
    printf("Please input year-month-day:");
    scanf("%d-%d-%d", &year, &month, &day);
    sum_days = day; // 直接把输入的天数给sum_days 后面的循环就不会少算输入的month月份的天数
    leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    for (i = 1; i < month; i++) {
        sum_days += month_tab[leap][i - 1];
    }
    printf("%d-%d-%d is %d days.\n", year, month, day, sum_days);
    return 0;
}




