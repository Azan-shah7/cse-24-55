#include <stdio.h>

int sum (int *a, int *b) {
    *a = 6;
    return *a + *b;
}

int main() {
    int x = 1;
    int y = 2;
    int result = sum(&x, &y);
    printf("%d , result", result);
    printf(" value of x is %d", x);
    return 0;
}
