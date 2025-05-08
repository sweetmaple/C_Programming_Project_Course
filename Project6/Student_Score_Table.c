/* Student_Score_Table */
#include <stdio.h>
int main() {
    float form[3][6] = {{78, 92, 86, 85, 95,  86},
                        {79, 93, 95, 80, 100, 98},
                        {80, 91, 93, 75, 97,  90}};
    float courses_avg[3];
    float students_score_avg[6];
    int i, j;
    /* 每门课的平均分 */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            courses_avg[i] += form[i][j];
        }
        courses_avg[i] /= 6;
    }
    printf("Average score per course:\n");
    printf("Math\t\tChinese\t\tEnglish\n");
    for (i = 0; i < 3; i++) {
        printf("%.1f\t\t", courses_avg[i]);
    }
    putchar('\n');
    /* 每个人的平均分 */
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 3; j++) {
            students_score_avg[i] += form[j][i];
        }
        students_score_avg[i] /= 3;
    }
    printf("\nAverage score per student:\n");
    printf("XiaoXiao\tLiLi\t\tWuXin\t\tZhangYa\t\tZhaoYu\t\tZhangLiang\n");
    for (i = 0; i < 6; i++) {
        printf("%.1f\t\t", students_score_avg[i]);
    }
    putchar('\n');
    return 0;
}



