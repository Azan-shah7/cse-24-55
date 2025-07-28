#include <stdio.h>
void change(int **pp);

void change(int **pp) {
    **pp = **pp + 50;
}

int main() {
    int a = 10;
    int *p = &a;
    int **pp = &p;
    change(pp);
    printf("New value of a: %d", a);
    return 0;
}
