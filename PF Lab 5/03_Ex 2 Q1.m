#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter a number: ");
    scanf("%d", &a);

    // Calculate remainder after reading the input
    b = a % 3;
    c = a % 5;

    if (b == 0 && c == 0) {
        printf("Number is divisible by both 3 and 5\n");
    } else {
        printf("Number is not divisible by both 3 and 5\n");
    }

    return 0;
}
