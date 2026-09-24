//Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main() {
    int rows, cols, i, j;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int rowSums[rows];
    for (i = 0; i < rows; i++) {
        rowSums[i] = 0;
        for (j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
        }
    }
    for (i = 0; i < rows; i++) {
        printf("%d ", rowSums[i]);
    }
    printf("\n");
    return 0;
}