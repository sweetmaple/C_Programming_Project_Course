/* Rainfall */
/* 用符号常量,可以通过改变YEARS, MONTHS的值,查询想要的结果
 * 例如求2015-2017这三年中上半年的降雨量,月平均降雨量,月最大降雨量
 * 只需要将YEARS改为3,MONTHS改为6即可
 * */
#include <stdio.h>
#define YEARS 5
#define MONTHS 12
int main() {
    float form[5][12] =
            {{0.4, 11.2, 7.7,  34.5, 35.0, 42.2,  107.4, 82.6,  87.2, 19.0, 29.6, 1.8},
             {0.1, 8.1,  0,    5.5,  24.0, 72.9,  344.3, 76.9,  59.0, 70.1, 8.2,  0},
             {0.2, 5.4,  12.5, 0,    31.2, 119.5, 97.4,  233.9, 2.8,  73.3, 0,    0},
             {0,   0,    4.1,  47.5, 9.3,  35.4,  309.1, 109.6, 25.4, 4.4,  1.6,  0.2},
             {0,   2.0,  2.5,  39.4, 58.5, 9.4,   86.8,  63.9,  90.9, 22.9, 21.3, 5.7}};
    float annual_rainfall[5];
    float monthly_rainfall[12];
    float max = 0;
    int year, month;
    /* 年降水量 */
    printf("Annual rainfall:\n");
    printf("Years\t\tRainfall (mm)\n");
    for (year = 0; year < YEARS; year++) {
        for (month = 0; month < MONTHS; month++) {
            annual_rainfall[year] += form[year][month];
        }
    }
    for (year = 0; year < YEARS; year++) {
        printf("%d\t\t%.1f\n", 2015 + year, annual_rainfall[year]);
    }
    /* 月平均降水量 */
    printf("\nMonthly rainfall (mm):\n");
    for (month = 0; month < MONTHS; month++) {
        for (year = 0; year < YEARS; year++) {
            monthly_rainfall[month] += form[year][month];
        }
        monthly_rainfall[month] /= 5;
    }
    /* 打印月的表头判断操作 */
    for (month = 0; month < MONTHS; month++) {
        if (month < 9) {
            printf("0%d\t", 1 + month);
        } else {
            printf("%d\t", 1 + month);
        }
    }
    putchar('\n');
    for (month = 0; month < MONTHS; month++) {
        printf("%.2f\t", monthly_rainfall[month]);
    }
    putchar('\n');
    /* 月最大降水量 */
    for (year = 0; year < YEARS; year++) {
        for (month = 0; month < MONTHS; month++) {
            if (max < form[year][month]) {
                max = form[year][month];
            }
        }
    }
    printf("\nMaximum monthly rainfall from 2015 to 2019: %.1f (mm)\n", max);
    return 0;
}
