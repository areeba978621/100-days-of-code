//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int x;
    for (x = 1; x <= n; x++) {
        int sum1 = 0, sum2 = 0;
        for (int i = 1; i <= x; i++) {
            sum1 += i;
        }
        for (int i = x; i <= n; i++) {
            sum2 += i;
        }
        if (sum1 == sum2) {
            printf("%d\n", x);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}