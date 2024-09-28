#include <stdio.h>

int main() {
    int a, b = 0;
    printf("Write a number: ");
    scanf("%d", &a);

    while (a > 0) {
        if (a & 1) {
            b = b + 1;
        }
        a = a >> 1;
    }
    
    printf("Number of 1s is %d\n", b);

    return 0;
}
