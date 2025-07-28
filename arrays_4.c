#include <stdio.h>
int sum(int arr[], int size) {
    int s = 0;
    for (int i = 0; i < size; i++)
        s += arr[i];
    return s;
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Sum is %d", sum(arr, 5));
    return 0;
}
