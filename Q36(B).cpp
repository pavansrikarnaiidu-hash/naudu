//Find the sum of all elements in a matrix
#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int matrix[r][c];

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add element to sum
        }
    }

    printf("Sum of all elements: %d\n", sum);
    return 0;
}

