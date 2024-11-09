#include <stdio.h>

int maxa(int arr[], int length) {
    int max1 = -9999;
    for (int i = 0; i < length; i++) {
        if (arr[i] > max1) {
            max1 = arr[i];
        }
    }
    return max1;
}

int mina(int arr[], int length) {
    int min1 = 9999;
    for (int i = 0; i < length; i++) {
        if (arr[i] < min1) {
            min1 = arr[i];
        }
    }
    return min1;
}

int main() {
    int a;
    printf("How many numbers: ");
    scanf("%d", &a);
    int arr[a];

    for (int i = 0; i < a; i++) {
        printf("Enter num %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = maxa(arr, a);
    int min = mina(arr, a);

    printf("Max is %d\n", max);
    printf("Min is %d\n", min);

    return 0;
}