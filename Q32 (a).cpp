//Merge two arrays.
#include <stdio.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    int merged[10];
    
    
    for(int i = 0; i < 5; i++) {
        merged[i] = arr1[i];
    }
    
    for(int i = 0; i < 5; i++) {
        merged[i+5] = arr2[i];
    }
    
    printf("Merged array: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", merged[i]);
    }
    
    return 0;
}

