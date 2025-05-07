/* Study_Group_Score */
#include <stdio.h>
int main() {
    float form[5][3] = {{90, 93, 89}, {92, 95, 95}, {85, 78, 80},
                        {78, 82, 80}, {81, 83, 86}};
    float students[5];
    float sum = 0, avg = 0;
    int i;
    for (i = 0; i < 5; i++) {
        students[i] = form[i][0] * 0.2 + form[i][1] * 0.2 + form[i][2] * 0.6;
    }
    printf("LiuXiao:%f\nAiLin:%f\nWeiWei:%f\nLinChen:%f\nHanYang:%f\n",
           students[0], students[1], students[2], students[3], students[4]);
    for (i = 0; i < 5; i++) {
        sum += students[i];
    }

    avg = sum / 5;
    printf("The average score of this group:%f\n", avg);
    return 0;
}
