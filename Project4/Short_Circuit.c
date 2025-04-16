/* Short_Circuit */
#include <stdio.h>
int main() {
    int m = 2, n = 3, a = 1, b = 2;
    int x, y;
    x = (m = a > b) && (n = a < b); // (m = a > b): 0,遇到&&,短路,后面直接不做
    printf("x = %d, m = %d, n = %d\n", x, m, n);
    y = (m = a > b) || (n = a < b); // (m = a > b): 0,遇到||,没短路,后面做,如果第一个表达式为真(1),短路
    printf("y = %d, m = %d, n = %d\n", y, m, n);
    return 0;
}

