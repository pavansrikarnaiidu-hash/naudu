//Search for an element in an array using linear search
#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // Element found, return index
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {10, 50, 30, 70, 80, 60, 20, 90, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int result = linearSearch(arr, n, key);

    if (result == -1)
        printf("Element not found in the array.\n");
    else
        printf("Element found at index: %d\n", result);

    return 0;
}

