#include <stdio.h>

int main() {
    int height, a;
    printf("Enter the rows of first half of the diamond: ");
    scanf("%d", &a);
        height = 2 * a - 1;


    for (int i = 1; i <= height; i++) {
        for (int j = i; j < height; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = height - 1; i >= 1; i--) {
        for (int j = height; j > i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}