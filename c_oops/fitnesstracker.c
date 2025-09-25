#include <stdio.h>

int main() {
    int steps;
    float calories;

    printf("Enter number of steps walked: ");
    scanf("%d", &steps);

    calories = steps / 20.0;

    printf("You walked %d steps.\n", steps);
    printf("You burned approximately %.2f calories.\n", calories);

    if (steps >= 10000) {
        printf("Great job! You reached your fitness goal today.\n");
    } else {
        printf("Keep going! Try to hit 10,000 steps.\n");
    }

    return 0;
}
