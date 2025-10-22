//Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output
#include <stdio.h>


void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, k;
    

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the value of k: ");
    scanf("%d", &k);

    
    sortArray(arr, n);

    
    if (k > 0 && k <= n) {
        printf("The %dth smallest element is: %d\n", k, arr[k - 1]);
    } else {
        printf("Invalid value of k.\n");
    }

    return 0;
}

