//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int n, i, j, flag = 1;
    printf("Enter matrix size: ");
    scanf("%d", &n);
    int mat[n][n];
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < i; j++) {
            if(mat[i][i] == mat[j][j]) {
                flag = 0; 
                break;
            }
        }
        if(!flag)
            break;
    }
    if(flag)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");
    return 0;
}

