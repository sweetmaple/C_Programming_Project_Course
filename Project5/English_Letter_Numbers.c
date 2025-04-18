/* English_Letter_Numbers */
#include <stdio.h>
int main() {
    char ch;
    int count = 0;
    scanf("%c", &ch);
    while (ch != '\n') {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            count++;
        }
        scanf("%c", &ch);
    }
    printf("count = %d\n", count);
    return 0;
}

