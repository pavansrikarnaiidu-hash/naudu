//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int swapFirstLast(int num) {
    int digits = (int)log10(num); 
    int firstDigit = num / (int)pow(10, digits);
    int lastDigit = num % 10;
    
    if (digits == 0) {
        return num;
    }


    int middle = num % (int)pow(10, digits);
    middle = middle / 10;

    
    int swappedNum = lastDigit * (int)pow(10, digits) + middle * 10 + firstDigit;

    return swappedNum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = swapFirstLast(number);
    printf("Number after swapping first and last digits: %d\n", result);

    return 0;
}

