#include <stdio.h>
void reverse(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    return 0;
}
