#include <stdio.h>

int sum(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int arr[6] = {2, 3, 4, 5, 6, 7};
    int result = sum(arr, 6);
    printf("%d", result);
    return 0;
}
