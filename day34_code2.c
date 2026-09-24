//Q68: Delete an element from an array.
#include <stdio.h>
int main() {
    int n, i, j, position;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &position);

    for (i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    for (j = 0; j < n - 1; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
    return 0;
}