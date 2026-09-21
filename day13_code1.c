//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main() {
    int a, b;
    char operator;

    printf("Enter two numbers(x y): ");
    scanf("%d %d", &a, &b);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Result: %d\n", a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (b != 0) {
                printf("Result: %d\n", a % b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}