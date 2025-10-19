//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>
#include <limits.h>

int main() {
    int n, k;
    scanf("%d", &n); 
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k); 

    for (int i = 0; i <= n - k; i++) {
        int max = INT_MIN;
        for (int j = i; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }
        printf("%d ", max);
    }
    printf("\n");
    return 0;
}

