#include <stdio.h>
int main() {
    float f = 3.14;
    float *p = &f;
    printf("Value of f: %.2f\n", f);
    printf("Address of f: %p\n", &f);
    printf("Value at pointer p: %.2f\n", *p);
    return 0;
}
