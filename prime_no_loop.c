#include <stdio.h>
int main() {
    int n = 5, i, isPrime = 1;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        printf("%d is prime", n);
    else
        printf("%d is not prime", n);
    return 0;
}
