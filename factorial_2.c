#include <stdio.h>
float average(int a, int b, int c);

float average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main() {
    int x = 5, y = 10, z = 15;
    printf("Average is %.2f", average(x, y, z));
    return 0;
}
