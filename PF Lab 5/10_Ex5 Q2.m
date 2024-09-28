#include <stdio.h>

int main() {
    int a, sum = 0;
    
    printf("Write a number: ");
    scanf("%d", &a);

    while (a > 0) {
        sum = sum + a % 10;
        a = a / 10;
    }
 printf("%d is your sum\n", sum);
     return 0;
     }
