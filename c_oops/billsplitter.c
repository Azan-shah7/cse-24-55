#include <stdio.h>

int main() {
    int people;
    float totalBill, perPerson;

    printf("Enter total bill amount: ");
    scanf("%f", &totalBill);

    printf("Enter number of people: ");
    scanf("%d", &people);

    if (people > 0) {
        perPerson = totalBill / people;
        printf("Each person should pay: %.2f\n", perPerson);
    } else {
        printf("Number of people must be greater than 0.\n");
    }

    return 0;
}
