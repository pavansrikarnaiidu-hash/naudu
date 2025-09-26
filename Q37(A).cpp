//Find the sum of each row of a matrix and store it in an array
#include <stdio.h>

int main() {
    int i, j, rows, columns;
    int a[10][10], row_sum[10]; 

    printf("Please Enter Number of rows and columns : ");
    scanf("%d %d", &rows, &columns);

    printf("Please Enter the Matrix Row and Column Elements\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        row_sum[i] = 0;
        for(j = 0; j < columns; j++) {
            row_sum[i] += a[i][j];
        }
    }

    printf("Sum of rows:\n");
    for(i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i+1, row_sum[i]);
    }

    return 0;
}

