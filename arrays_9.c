#include <stdio.h>
int main() {
    int rows, cols;
    printf("How many tables? ");
    scanf("%d", &rows);
    printf("Till what number? ");
    scanf("%d", &cols);
    int nums[rows], table[rows][cols];
    for (int i = 0; i < rows; i++) {
        printf("Enter number for table %d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            table[i][j] = nums[i] * (j + 1);
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", table[i][j]);
        printf("\n");
    }
    return 0;
}
