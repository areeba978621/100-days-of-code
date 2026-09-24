//Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main() {
    int n, original, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n > 0) {
        digit = n % 10;
        sum += digit * digit * digit; // For 3-digit Armstrong numbers
        n /= 10;
    }
    if (original == sum) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    return 0;
}