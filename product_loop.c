#include <stdio.h>
int main() {
    int n, i, product = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        product = product * i;
    printf("Product is %d", product);
    return 0;
}
