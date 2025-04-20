/* Judge_Score */
#include <stdio.h>
int main() {
    int i;
    float score[10], sum = 0.0, avg, max, min;
    printf("Please input the score of 10 judges:");
    for (i = 0; i < 10; i++) {
        scanf("%f", &score[i]);
    }
    max = min = score[0];
    for (i = 0; i < 10; i++) {
        sum += score[i];
        if (max < score[i]) {
            max = score[i];
        }
        if (min > score[i]) {
            min = score[i];
        }
    }
    avg = (sum - min - max) / 8;
    printf("Remove the highest score:%f\n", max);
    printf("Remove the lowest score:%f\n", min);
    printf("The player's score is:%f\n", avg);
    return 0;
}
