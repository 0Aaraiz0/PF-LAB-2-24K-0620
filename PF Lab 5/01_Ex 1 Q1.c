#include <stdio.h>

int main() {
    int a;
    printf("Your Age: ");
    scanf("%d", &a);

    if (a > 0) {
        if (a <= 12)
            printf("You are a child\n");
        else if (a < 18)
            printf("You are a teen\n");
        else if (a < 60)
            printf("You are an adult\n");
        else
            printf("You are a senior citizen\n");
    } else {
        printf("You are yet to born.\n");
    }

    return 0;
}
