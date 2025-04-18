/* Less_Than_Or_Equal_10000 */
#include <stdio.h>
int main() {
    int n, s = 0;
    for (n = 1; s <= 10000; n++) {
        s += n;
    }
    printf("n = %d\n", n - 2);
    return 0;
}

