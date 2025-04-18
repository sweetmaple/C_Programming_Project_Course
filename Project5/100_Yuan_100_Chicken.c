/* 100_Yuan_100_Chicken */
#include <stdio.h>
int main() {
    int cock, hen, chick;
    for (cock = 0; cock <= 20; cock++) {
        for (hen = 0; hen <= 33; hen++) {
            chick = 100 - cock - hen;
            if (5 * cock + 3 * hen + chick / 3 == 100 && chick % 3 == 0) {
                printf("cock = %d, hen = %d, chick = %d\n", cock, hen, chick);
            }
        }
    }
    return 0;
}

