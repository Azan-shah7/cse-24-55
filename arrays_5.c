#include <stdio.h>
int max(int arr[], int size) {
    int m = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > m) m = arr[i];
    return m;
}
int main() {
    int arr[5] = {11, 25, 7, 50, 32};
    printf("Max is %d", max(arr, 5));
    return 0;
}
