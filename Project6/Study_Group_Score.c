/* Study_Group_Score */
#include <stdio.h>
int main() {
    float form[5][3] = {{90, 93, 89}, {92, 95, 95}, {85, 78, 80},
                        {78, 82, 80}, {81, 83, 86}};
    float students_score[5];
    float sum = 0, avg = 0;
    int i;
    for (i = 0; i < 5; i++) {
        students_score[i] = form[i][0] * 0.2 + form[i][1] * 0.2 + form[i][2] * 0.6;
        sum += students_score[i];
    }
    printf("LiuXiao:%f\nAiLin:%f\nWeiWei:%f\nLinChen:%f\nHanYang:%f\n",
           students_score[0], students_score[1], students_score[2], students_score[3], students_score[4]);
    avg = sum / 5;
    printf("The average score of this group:%f\n", avg);
    return 0;
}
