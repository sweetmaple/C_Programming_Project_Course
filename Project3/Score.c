/* Score */
#include <stdio.h>
int main() {
    float chinese, math, english, physics;
    printf("Please input score of chinese, math, english and physics:");
    scanf("%f%f%f%f", &chinese, &math, &english, &physics);
    float total_score = chinese + math + english + physics;
    float average_score = total_score / 4;
    printf("total_score = %f, average_score = %f\n", total_score, average_score);
    return 0;
}

