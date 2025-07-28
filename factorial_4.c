#include <stdio.h>
int product(int a, int b);

int product(int a, int b) {
    return a * b;
}

int main() {
    int x = 6, y = 7;
    printf("Product is %d", product(x, y));
    return 0;
}
