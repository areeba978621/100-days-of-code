//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int sum = num1 + num2;
    int diff = num1 - num2;
    int product = num1 * num2;
    float quotient = (float)num1 / num2; 
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%.2f\n", sum, diff, product, quotient);
    
    return 0;
}