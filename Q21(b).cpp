//Write a program to check if a number is a perfect number
#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {  // sum proper divisors only
        if (num % i == 0) {
            sum += i;
        }
    }
    // A perfect number is equal to the sum of its proper divisors
    return sum == num;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}

