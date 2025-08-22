#include <stdio.h>

int main() {
    int mat[3][3][3];  // mat[0] = first matrix, mat[1] = second, mat[2] = sum
    int i, j;

    // Input first matrix
    printf("Enter elements of the first 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("mat[0][%d][%d]: ", i, j);
            scanf("%d", &mat[0][i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of the second 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("mat[1][%d][%d]: ", i, j);
            scanf("%d", &mat[1][i][j]);
        }
    }

    // Calculate sum and store in mat[2]
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            mat[2][i][j] = mat[0][i][j] + mat[1][i][j];
        }
    }

    // Display all matrices
    printf("\nFirst Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", mat[0][i][j]);
        }
        printf("\n");
    }

    printf("\nSecond Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", mat[1][i][j]);
        }
        printf("\n");
    }

    printf("\nSum Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", mat[2][i][j]);
        }
        printf("\n");
    }

    return 0;
}
