#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors are: ");
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }
    return 0;
}
