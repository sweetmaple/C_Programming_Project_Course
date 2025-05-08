/* Palindrome */
/*
 * 回文对联问题
 * 提醒:用字符串函数时,需要导入头文件string.h
 * */
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j;
    printf("Please input a string:");
    gets(str);
    for (i = 0, j = strlen(str); i < j; i += 3, j -= 3) { // UTF-8:一个汉字3byte(回文对联)
        if (str[i] != str[j - 3]) {                       // 如果这里是英文数字符号3改为1即可
            break;
        }
    }
    if (i >= j) {
        printf("%s is palindrome.\n", str);
    } else {
        printf("%s is not palindrome.\n", str);
    }
    return 0;
}




