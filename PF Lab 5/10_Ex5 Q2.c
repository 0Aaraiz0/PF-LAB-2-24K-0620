#include <stdio.h>

int main() {
    int a, sum = 0;
    
    printf("Write a number: ");
    scanf("%d", &a);

    while (a > 0) {
        sum = sum + a % 10;
        a = a / 10;
    }
 printf("Your sum is %d\n", sum);
     return 0;
     }
