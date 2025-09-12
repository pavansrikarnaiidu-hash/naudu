//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms
#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int digit) {
    int fact = 1, i;
    for (i = 1; i <= digit; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == num)
        printf("%d is a strong number.\n", num);
    else
        printf("%d is not a strong number.\n", num);

    return 0;
}

