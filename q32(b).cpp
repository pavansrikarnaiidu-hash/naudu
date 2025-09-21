//Find the digit that occurs the most times in an integer number
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, digit, i, max_digit = 0, max_count = 0;
    int freq[10] = {0};    

    
    printf("Enter an integer: ");
    scanf("%d", &num);
    int n = abs(num);

    
    while(n > 0) {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
}
    for (i = 0; i < 10; i++) {
        if (freq[i] >= max_count) {
            max_count = freq[i];
            max_digit = i;
        }
    }

    printf("The most frequent digit is %d\n", max_digit);
    return 0;
}

