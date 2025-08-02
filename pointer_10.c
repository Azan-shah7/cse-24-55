#include <stdio.h>

int* SUM(int *x, int *y) {
    int s = *x + *y;
    int *p = &s;
    return p;
}

float* AVERAGE(int *x, int *y) {
    float avg = (*x + *y) / 2.0;
    float *p = &avg;
    return p;
}

int main() {
    int a = 4, b = 6;
    int *X = &a, *Y = &b;
    int *sum;
    float *avg;

    sum = SUM(X, Y);
    avg = AVERAGE(X, Y);

    printf("Sum is: %d\n", *sum);
    printf("Average is: %.2f\n", *avg);

    return 0;
}


