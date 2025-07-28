#include <stdio.h>
int main() {
    int age = 45;
    if (age > 60)
        printf("You can drive and you are a senior");
    else if (age > 40)
        printf("You can drive and you are elder");
    else if (age < 18)
        printf("You cannot drive");
    else
        printf("You can drive");
    return 0;
}
