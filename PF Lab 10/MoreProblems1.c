#include <stdio.h>

void printarr(int arr[], int n) {
    if (n == 0) {
        return; 
    }

    printarr(arr, n - 1); 
    printf("%d\n", arr[n - 1]); 
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    printarr(arr, n);
    return 0;
}