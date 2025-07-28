#include <stdio.h>
#include <string.h>

struct bill {
    int consumer_no;
    char name[30];
    float units;
    float amount;
};

int main() {
    struct bill b1;

    printf("Enter Consumer No: ");
    scanf("%d", &b1.consumer_no);
    printf("Enter Name: ");
    scanf("%s", b1.name);
    printf("Enter Units: ");
    scanf("%f", &b1.units);

    if (b1.units <= 100)
        b1.amount = b1.units * 5;
    else if (b1.units <= 200)
        b1.amount = 100 * 5 + (b1.units - 100) * 7;
    else
        b1.amount = 100 * 5 + 100 * 7 + (b1.units - 200) * 10;

    printf("\nElectricity Bill:\n");
    printf("Consumer No: %d\nName: %s\nUnits: %.2f\nAmount: %.2f\n", b1.consumer_no, b1.name, b1.units, b1.amount);

    return 0;
}
