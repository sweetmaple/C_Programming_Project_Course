/* Difference */
#include <stdio.h>
int main() {
    char str1[255], str2[255];
    int i, diff;
    puts("Please input a string(srt1):");
    gets(str1);
    puts("Please input a string(srt2):");
    gets(str2);
    for (i = 0; str1[i] == str2[i] && str1[i] != '\0'; i++);
    diff = str1[i] - str2[i];
    printf("diff = %d\n", diff);
    return 0;
}




