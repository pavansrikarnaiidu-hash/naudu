//Multiply two matrices
#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication not possible. Columns of first matrix must equal rows of second.\n");
        return 1;
    }

    int A[m][n], B[p][q], C[m][q];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            C[i][j] = 0;

    
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            for (k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];

    
    printf("Product of the two matrices:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            printf("%d\t", C[i][j]);
        printf("\n");
    }
    return 0;
}

