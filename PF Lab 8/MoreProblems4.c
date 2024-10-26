#include <stdio.h>

int main() {
    int arr[3][3] = {{3, 8, 7}, {9, 12, 2}, {3, 5, 6}};
    int arr2[3][3] = {{1, 2, 2}, {3, 0, 6}, {4, 5, 4}};
    int product[3][3];

     for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
        product[i][j] = 0;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                product[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }

    printf("Product of the two matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}