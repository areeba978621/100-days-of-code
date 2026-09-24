//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, firstDigit, lastDigit, numDigits = 0, tempNum;
    printf("Enter a number: ");
    scanf("%d", &num);

    tempNum = num;
    lastDigit = tempNum % 10;

    while (tempNum != 0) {
        firstDigit = tempNum % 10;
        tempNum /= 10;
        numDigits++;
    }

    if (numDigits == 1) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    int swappedNum = lastDigit * pow(10, numDigits - 1) + (num % (int)pow(10, numDigits - 1)) - lastDigit + firstDigit;

    printf("Swapped number: %d\n", swappedNum);
    return 0;
}