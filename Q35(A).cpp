//Find the second largest element in an array
#include <stdio.h>
#include <limits.h>  

int main() {
    int arr[1000], size, i;
    int max1, max2;

    printf("Enter size of the array (1-1000): ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Array should have at least two elements.\n");
        return 1;
    }

    printf("Enter elements in the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = INT_MIN;

    for (i = 0; i < size; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    if (max2 == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is %d\n", max2);
    }

    return 0;
}

