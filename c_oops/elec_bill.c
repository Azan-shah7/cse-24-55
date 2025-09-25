#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5.0;  // ₹5 per unit
    } 
    else if (units <= 300) {
        bill = (100 * 5.0) + (units - 100) * 7.0;  // Next 200 units → ₹7 per unit
    } 
    else {
        bill = (100 * 5.0) + (200 * 7.0) + (units - 300) * 10.0;  // Above 300 → ₹10 per unit
    }

    printf("Total Electricity Bill = %.2f\n", bill);

    return 0;
}
