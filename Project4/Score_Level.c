/* Score_Level */
#include <stdio.h>
int main() {
    float score;
    printf("Please input the score of student:");
    scanf("%f", &score);
    if (score >= 0 && score <= 100) {
        switch ((int)score / 10) {
            case 10:
            case 9:
                printf("A\n");
                break;
            case 8:
                printf("B\n");
                break;
            case 7:
                printf("C\n");
                break;
            case 6:
                printf("D\n");
                break;
            default:
                printf("E\n");
        }
    } else {
        printf("Input Error.\n");
    }
    return 0;
}

