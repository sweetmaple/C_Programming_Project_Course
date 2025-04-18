/* Less_Than_Or_Equal_10000 */
#include <stdio.h>
int main() {
    int n, s = 0;
    for (n = 1; s <= 10000; n++) {
        s += n;
    }
    printf("n = %d\n", n - 2); // n - 2的原因是什么? 假设 n = 100, s = 9999; n = 101, s = 19999; n = 102, 不进入循环
    return 0;
}

