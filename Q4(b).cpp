//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Using a for loop
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum (using loop): %d\n", sum);

    // Using formula
    int sum_formula = (n * (n + 1)) / 2;
    printf("Sum (using formula): %d\n", sum_formula);

    return 0;
}

