#include <stdio.h>

int main() {
    int number1, number2;  

    printf("Enter first number: ");
    scanf("%d", &number1);
    
    printf("Enter second number: ");
    scanf("%d", &number2);

    (number1 > number2) ? printf("%d is greater\n", number1) : 
    (number1 < number2) ? printf("%d is greater\n", number2) : 
    printf("Both are equal\n");

    return 0;
}
