#include <stdio.h>

int main() {
    int a, b;

    printf("How many numbers do you want to enter: ");
    scanf("%d", &a);
    printf("Enter the maximum positive number you will enter in the list: ");
    scanf("%d", &b);

    if (b <= 0) {
        printf("Error: The maximum number must be positive.\n");
        return 1;
    }

    int arr[a];

    for (int i = 0; i < a; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] < 0 || arr[i] >= b) {
            printf("Error: Please enter a number between 0 and %d.\n", b - 1);
            i--;
        }
    }

    int freq[b];
    for (int i = 0; i < b; i++) {
        freq[i] = 0;
    }

    for (int i = 0; i < a; i++) {
        freq[arr[i]]++;
    }

    int foundDuplicate = 0;

    printf("Duplicate numbers are: ");
    for (int i = 0; i < b; i++) {
        if (freq[i] > 1) {
            printf("%d ", i);
            foundDuplicate = 1;
        }
    }

    if (!foundDuplicate) {
        printf("No duplicates found.");
    }

    return 0;
}