//Q77: Check if the elements on the diagonal of a matrix are distinct.

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
    int distinct = 1;
    for (i = 0; i < rows && distinct; i++) {
        for (j = 0; j < cols && distinct; j++) {
            if (i == j) {
                for (int k = 0; k < rows && distinct; k++) {
                    if (k != i && matrix[k][k] == matrix[i][j]) {
                        distinct = 0;
                    }
                }
            }
        }
    }
    if (distinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}