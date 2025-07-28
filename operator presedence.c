#include <stdio.h>
int main() {
    int a = 10, b = 5, c = 2;
    printf("Result without parenthesis: %d\n", a + b * c - a / b % c);
    printf("Result with parenthesis: %d", ((a + b) * c) - (a / (b % c + 1)));
    return 0;
}
