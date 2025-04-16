/* Teaching_Evaluation */
#include <stdio.h>
int main() {
    float jw, dd, xs, xb, zf; // 分别是几个评分的首字母拼音,zf:总分
    printf("Please input score of jw, dd, xs, xb:");
    scanf("%f%f%f%f", &jw, &dd, &xs, &xb);
    if (jw >= 0 && jw <= 100 && dd >= 0 && dd <= 100 && xs >= 0 && xs <= 100 && xb >= 0 && xb <= 100) {
        zf = jw * 0.1 + dd * 0.1 + xs * 0.5 + xb * 0.3;
        printf("Teacher's score is %f\n", zf);
        if (zf >= 90) {
            printf("Your rating is excellent!\n");
        } else if (zf >= 70) {
            printf("Your rating is competent!\n");
        } else {
            printf("Your rating is incompetent!\n");
        }
    } else {
        printf("The score is invalid, please input again.\n");
    }
    return 0;
}
