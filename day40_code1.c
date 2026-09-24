//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int d = 0; d < m + n - 1; d++) {
        int row = d < n ? 0 : d - n + 1;
        int col = d < n ? d : n - 1;

        while (row < m && col >= 0) {
            printf("%d ", arr[row][col]);
            row++;
            col--;
        }
    }
    printf("\n");
    return 0;
}