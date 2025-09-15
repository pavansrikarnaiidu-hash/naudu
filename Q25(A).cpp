#include <stdio.h>

int main() {
    int n = 5;  // Last number to print
    
    for (int i = 0; i < n; i++) {
        int start = n - i;  // Calculate starting number for each row
        for (int j = start; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

