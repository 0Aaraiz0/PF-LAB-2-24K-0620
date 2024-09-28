#include <stdio.h>

int main() {
    int a;
    float i;
    int c;

    printf("Enter your age: ");
    scanf("%d", &a);

    printf("Enter your annual income: ");
    scanf("%f", &i);

    printf("Enter your credit score: ");
    scanf("%d", &c);

    if (a >= 18 && i >= 100000 && c >= 2000) {
        printf("You are eligible for a loan.\n");
    } else {
        printf("You are not eligible for a loan.\n");
    }

    return 0;
}
