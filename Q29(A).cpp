//Find the sum of array elements
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add each element to sum
    }

    printf("Sum of the array elements is: %d\n", sum);
    return 0;
}

