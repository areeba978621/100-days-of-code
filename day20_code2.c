//Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    int num;
    printf("Enter a binary number: ");
    scanf("%d", &num);
    int complement = 0;
    int place = 1;
    while (num != 0) {
        int digit = num % 10;
        if (digit == 0) {
            complement += 1 * place;
        }
        num /= 10;
        place *= 10;
    }

    printf("1's complement: %d\n", complement);
    return 0;
}