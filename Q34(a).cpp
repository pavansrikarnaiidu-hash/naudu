#include <stdio.h>
#define SIZE 6  

int main() {
    int arr[SIZE] = {10, 20, 30, 40, 50}; 
    int n = 5;  
    int element, pos, i;

    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid Position\n");
        return 1;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }


    arr[pos] = element;

    n++; 

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

