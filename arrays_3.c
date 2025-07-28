#include <stdio.h>
int main() {
    int arr[5];
    int *p = arr;
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", p + i);
    printf("You entered:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", *(p + i));
    return 0;
}
