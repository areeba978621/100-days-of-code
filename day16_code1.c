//Q31: Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int n, remainder = 0, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        remainder += (n % 2) * i;
        n /= 2;
        i *= 10;
    }
    printf("Binary representation: %d\n", remainder);
    return 0;
}