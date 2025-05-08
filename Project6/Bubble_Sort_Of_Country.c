/* Bubble_Sort_Of_Country */
#include <stdio.h>
#include <string.h>
int main() {
    char str_country[10][255];
    char str_temp[255];
    int i, j;
    for (i = 0; i < 10; i++) {
        gets(str_country[i]);
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (strcmp(str_country[j], str_country[j + 1]) > 0) {
                strcpy(str_temp, str_country[j]);
                strcpy(str_country[j], str_country[j + 1]);
                strcpy(str_country[j + 1], str_temp);
            }
        }
    }
    printf("The result of countries in alphabetical order is:\n");
    for (i = 0; i < 10; i++) {
        puts(str_country[i]);
    }
    return 0;
}




