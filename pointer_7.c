#include <stdio.h>
void change(int *x);

void change(int *x) {
    *x = *x + 10;
}

int main() {
    int a = 5;
    change(&a);
    printf("New value of a: %d", a);
    return 0;
}
