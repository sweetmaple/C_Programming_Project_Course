/* Difference */
#include <stdio.h>
int main() {
    char str1[255], str2[255];
    int i, diff;
    puts("Please input a string(srt1):");
    gets(str1);
    puts("Please input a string(srt2):");
    gets(str2);
    /*
     * str1[i] != '\0'条件必须加
     * 假设定义的字符数组长度很小且刚好装满
     * str1[6] = "apple";
     * str2[6] = "apple";
     * 若无此条件 则会继续比较str1[6] == str2[6] 显然数组下标越界 错误!
     * */
    for (i = 0; str1[i] == str2[i] && str1[i] != '\0'; i++);
    diff = str1[i] - str2[i];
    printf("diff = %d\n", diff);
    return 0;
}




