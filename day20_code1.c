//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int num, product = 1;
    int hasOddDigit = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOddDigit = 1;
        }
        num /= 10;
    }

    if (!hasOddDigit) {
        product = 1;
    }

    printf("Product of odd digits: %d\n", product);
    return 0;
}