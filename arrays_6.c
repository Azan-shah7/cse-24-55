#include <stdio.h>
int main() {
    int arr[2][3];
    printf("Enter 6 numbers:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &arr[i][j]);
    printf("Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
