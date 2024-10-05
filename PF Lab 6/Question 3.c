#include <stdio.h>
#include <math.h>

int main() {
    int n, a, b;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is neither prime nor composite\n", n);
        return 0;
    }

    b = sqrt(n);
    int P = 0;
    int i = 2;

    while (i <= b) {
        a = n % i;
        if (a == 0) {
            P = 1;
            break;
        }
        i++;
    }

    if (P == 1) {
        printf("%d is composite\n", n);
    } else {
        printf("%d is prime\n", n);
    }

    return 0;
}
