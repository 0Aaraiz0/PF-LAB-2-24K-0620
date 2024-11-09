#include <stdio.h>

void addition(int num1, int num2) {
    int a = num1 + num2;
    printf("%d is the result of addition\n", a);
}

void subtraction(int num1, int num2) {
    int a = num1 - num2;
    printf("%d is the result of subtraction\n", a);
}

void multiplication(int num1, int num2) {
    int a = num1 * num2;
    printf("%d is the result of multiplication\n", a);
}

void division(int num1, int num2) {
    if (num2 != 0) {
        int a = num1 / num2;
        printf("%d is the result of division\n", a);
    } else {
        printf("Division by zero is not allowed\n");
    }
}

int main() {
    int num1, num2;
    char operator;

    printf("Enter num 1: ");
    scanf("%d", &num1);
    printf("Enter num 2: ");
    scanf("%d", &num2);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator); // Adding a space before %c to consume any leftover newline

    switch (operator) {
        case '+':
            addition(num1, num2);
            break;
        case '-':
            subtraction(num1, num2);
            break;
        case '*':
            multiplication(num1, num2);
            break;
        case '/':
            division(num1, num2);
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}