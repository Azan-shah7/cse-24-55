#include <stdio.h>
int main() {
    int a = 20;
    int *p = &a;
    int **pp = &p;
    printf("Value of a: %d\n", a);
    printf("Value using pointer p: %d\n", *p);
    printf("Value using pointer to pointer pp: %d\n", **pp);
    return 0;
}
