	#include <stdio.h>

void deleteElement(int arr[], int *n, int key) {
    int i = 0;

    while (i < *n && arr[i] != key) {
        i++;
    }
    if (i == *n) {
        printf("Element not found in the array\n");
        return;
    }
    for (int j = i; j < *n - 1; j++) {
        arr[j] = arr[j + 1];
    }
    (*n)--;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    deleteElement(arr, &n, key);

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

