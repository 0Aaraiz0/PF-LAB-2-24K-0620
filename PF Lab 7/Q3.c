#include <stdio.h>

int main() {
    int a;

    printf("How many numbers do you want to enter: ");
    scanf("%d", &a);

    if (a <= 0) {
        printf("Error: You must enter a positive number of elements.\n");
        return 1;
    }

    int arr[a];

    for (int i = 0; i < a; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int d = 1; d < a; d++) {
        if (arr[d] > max) {
            max = arr[d];
        }
        if (arr[d] < min) {
            min = arr[d];
        }
    }

    printf("Maximum is %d\n", max);
    printf("Minimum is %d\n", min);

    return 0;
}
