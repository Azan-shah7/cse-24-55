#include <stdio.h>
int main() {
    int a = 10;
    int *p = &a;
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value at pointer p: %d\n", *p);
    return 0;
}
