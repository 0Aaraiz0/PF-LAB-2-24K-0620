#include <stdio.h>

int main() {
    int n, a;
    printf("Write a number you want to start with: ");
    scanf("%d", &n);
    if (n == 0) {
            printf("Final sum is %d\n", n);
            return 0;
        }

    while (1) {
        printf("Write a number you want to add : ");
        scanf("%d", &a);
        
        if (a == 0) {
            break;
        }

        n += a;
        printf("Your sum is now %d\n", n);
    }

    printf("Final sum is %d\n", n);
    return 0;
}
