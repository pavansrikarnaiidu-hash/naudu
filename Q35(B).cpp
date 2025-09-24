//Rotate an array to the right by k positions.
#include <stdio.h>


void reverse(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


void rightRotate(int arr[], int n, int k) {
    k = k % n; 

    
    reverse(arr, 0, n - 1);

    
    reverse(arr, 0, k - 1);

    
    reverse(arr, k, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    rightRotate(arr, n, k);

    printf("\nArray after right rotation by %d positions:\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

