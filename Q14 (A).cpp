//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to generate and sum first n odd numbers
    for(i = 1; i <= n; i++) {
        int oddNumber = 2 * i - 1;  // nth odd number formula
        sum += oddNumber;
    }
    
    printf("Sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}

