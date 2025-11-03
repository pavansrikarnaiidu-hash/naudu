//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0, expected_sum;

    printf("Enter %d elements (numbers between 1 and %d, with one repeated): ", n, n - 1);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }

    expected_sum = (n - 1) * n / 2;
    printf("The repeated number is: %d\n", sum - expected_sum);

    return 0;
}

