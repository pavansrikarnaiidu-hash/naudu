//Perform diagonal traversal of a matrix.
#include <stdio.h>

#define ROW 4
#define COL 4

void diagonalOrder(int mat[ROW][COL]) {
    
    for (int row = 0; row < ROW; row++) {
        int i = row, j = 0;
        while (i >= 0 && j < COL) {
            printf("%d ", mat[i][j]);
            i--;
            j++;
        }
    }
    
    for (int col = 1; col < COL; col++) {
        int i = ROW - 1, j = col;
        while (i >= 0 && j < COL) {
            printf("%d ", mat[i][j]);
            i--;
            j++;
        }
    }
}

int main() {
    int mat[ROW][COL] = { 
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}, 
        {13, 14, 15, 16}
    };
    diagonalOrder(mat);
    return 0;
}

