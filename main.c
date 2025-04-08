#include <stdio.h>

void rearrangeArray(float arr[], int n) {
    int left = 0;
    int right = n - 1;
    int i = 0;         

    while (i <= right) {
        if (arr[i] > 0) {
            float temp = arr[left];
            arr[left] = arr[i];
            arr[i] = temp;
            left++;
            i++;
        } else if (arr[i] < 0) {
            float temp = arr[right];
            arr[right] = arr[i];
            arr[i] = temp;
            right--;
        } else {
            i++;
        }
    }
}

void printArray(float arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%4.2f ", arr[i]);
    }
    printf("\n");
}

int main() {
    float arr[] = {3.5, -2.1, 0.0, -5.6, 4.2, 0.0, 1.3, -3.8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Оригінальний масив:\n");
    printArray(arr, n);

    rearrangeArray(arr, n);

    printf("Оновлений масив:\n");
    printArray(arr, n);

    return 0;
}
