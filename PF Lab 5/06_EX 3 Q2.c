#include <stdio.h>

int main() {
    int num;
    
    printf("Enter Number: ");
    scanf("%d", &num);
    
    num > 0 ? printf("Positive number.\n") : 
    num < 0 ? printf("Negative number.\n") : 
    printf("Number is zero.\n");
    
    return 0;
}
