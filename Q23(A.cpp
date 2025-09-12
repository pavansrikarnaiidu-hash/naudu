//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator, denominator;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    numerator = 2;
    denominator = 3;

    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("Sum of the series up to %d terms is: %.6f\n", n, sum);

    return 0;
}

