//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num, i;
    int binary[32];

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    int index = 0;
    int temp = num;

    
    if (num < 0) {
        printf("Binary representation (32-bit signed): ");
        unsigned int unum = (unsigned int)num; 
        for (i = 31; i >= 0; i--) {
            int bit = (unum >> i) & 1;
            printf("%d", bit);
        }
        printf("\n");
        return 0;
    }

    
    while (temp > 0) {
        binary[index] = temp % 2;
        temp = temp / 2;
        index++;
    }

    printf("Binary: ");
    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}

