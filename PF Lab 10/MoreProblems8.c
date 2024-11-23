#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    if (size == 0) {
        return -1;
    }
    if (arr[size - 1] == target) {
        return size - 1;
    }
    return linearSearch(arr, size - 1, target);
}

int main() {
    int a; 
    int arr[10] = {23, 45, 67, 58, 90, 100, 34, 12, 50, 99};
    int size = 10;
    
    printf("Enter target: ");
    scanf("%d", &a);
    printf("\n");

    int index = linearSearch(arr, size, a);

    if (index == -1) {
        printf("Not Found\n");
    } else {
        printf("Target found at index %d\n", index);
    }

    return 0;
}
