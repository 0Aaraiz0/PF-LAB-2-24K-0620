#include <stdio.h>

int main() {
    printf("1 ");
    int n = 0, c = 0;

    for (int a = 1, b = 2; n < 7; n = n + 1) {
        c = a * b;
        a = b;
        b = c;
        printf("%d ", c);
    }

    return 0;
}
