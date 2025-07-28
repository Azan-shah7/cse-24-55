#include <stdio.h>
float toFahrenheit(float c);

float toFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

int main() {
    float celsius = 37;
    printf("Temperature in Fahrenheit is %.2f", toFahrenheit(celsius));
    return 0;
}
