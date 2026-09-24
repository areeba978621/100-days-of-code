//Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main() {
    int n, i, j, newElement;
    scanf("%d", &n);
    int arr[n + 1]; 
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &newElement);

    for (i = n - 1; (i >= 0 && arr[i] > newElement); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = newElement;
    for (j = 0; j <= n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
    return 0;
}