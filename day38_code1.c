//Q75: Add two matrices.
#include <stdio.h>
int main() {
    int rows1, cols1, rows2, cols2, i, j;
    scanf("%d %d", &rows1, &cols1);
    int matrix1[rows1][cols1];
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    scanf("%d %d", &rows2, &cols2);
    int matrix2[rows2][cols2];
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices cannot be added due to incompatible dimensions.\n");
        return 0;
    }

    int sumMatrix[rows1][cols1];
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}