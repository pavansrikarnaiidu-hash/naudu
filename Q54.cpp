//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>

int findPivotInteger(int n) {
    for (int x = 1; x <= n; x++) {
        long long leftSum = (long long)(1 + x) * x;
        long long rightSum = (long long)(x + n) * (n - x + 1);
        if (leftSum == rightSum)
            return x;
    }
    return -1;
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int pivot = findPivotInteger(n);
    printf("%d\n", pivot);

    return 0;
}

