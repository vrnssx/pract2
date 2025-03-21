#include <stdio.h>

void rearrangeArray(float arr[], int n) {
    int posIndex = 0, negIndex = n - 1;

    while (posIndex <= negIndex) {
        if (arr[posIndex] > 0) {
            posIndex++;
        } else if (arr[negIndex] < 0) {
            negIndex--;
        } else {
            float temp = arr[posIndex];
            arr[posIndex] = arr[negIndex];
            arr[negIndex] = temp;
            posIndex++;
            negIndex--;
        }
    }

    // Заповнюємо решту масиву нулями
    int zeroIndex = posIndex;
    while (zeroIndex <= negIndex) {
        arr[zeroIndex++] = 0;
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

    printf("Original array:\n");
    printArray(arr, n);

    rearrangeArray(arr, n);

    printf("Rearranged array:\n");
    printArray(arr, n);

    return 0;
}
