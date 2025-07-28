#include <stdio.h>
void reverseCount(int n);

void reverseCount(int n) {
    if (n == 0)
        return;
    printf("%d ", n);
    reverseCount(n - 1);
}

int main() {
    int n = 10;
    reverseCount(n);
    return 0;
}
