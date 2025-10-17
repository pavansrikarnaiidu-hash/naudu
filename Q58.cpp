//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>


void productExceptSelf(int nums[], int n, int answer[]) {
    int prefix[n];
    int suffix[n];

    
    prefix[0] = 1;
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    
    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    
    for (int i = 0; i < n; i++) {
        answer[i] = prefix[i] * suffix[i];
    }
}

int main() {
    int nums[] = {10, 3, 5, 6, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    int answer[n];

    productExceptSelf(nums, n, answer);

    for (int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");

    return 0;
}

