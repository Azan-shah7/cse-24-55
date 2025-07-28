#include <stdio.h>
void update(int *arr, int size);

void update(int *arr, int size) {
    for (int i = 0; i < size; i++)
        arr[i] = arr[i] * 2;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    update(arr, 5);
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    return 0;
}
