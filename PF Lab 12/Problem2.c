#include <stdio.h>
#include <stdlib.h>

void multiplication(int** ptrA, int** ptrB, int rowsA, int colsA, int rowsB, int colsB) {
    if (colsA != rowsB) {
        printf("Matrix multiplication is not possible due to dimension mismatch.\n");
        return;
    }

    int** result = (int**)malloc(rowsA * sizeof(int*));
    for (int i = 0; i < rowsA; i++) {
        result[i] = (int*)malloc(colsB * sizeof(int));
    }

    // Initialize the result matrix to 0
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += ptrA[i][k] * ptrB[k][j];
            }
        }
    }

    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}


int main(){
    int rowsA, colsA, rowsB, colsB;

    // Input dimensions for matrix A
    printf("Enter rows of matrix A: ");
    scanf("%d", &rowsA);
    printf("Enter columns of matrix A: ");
    scanf("%d", &colsA);

    // Input dimensions for matrix B
    printf("Enter rows of matrix B: ");
    scanf("%d", &rowsB);
    printf("Enter columns of matrix B: ");
    scanf("%d", &colsB);

    // Check if multiplication is possible
    if (colsA != rowsB) {
        printf("Matrix multiplication is not possible due to dimension mismatch.\n");
        return 1;
    }

    // Allocate memory for matrix A
    int** ptrA = (int**)malloc(rowsA * sizeof(int*));
    for (int i = 0; i < rowsA; i++) {
        ptrA[i] = (int*)malloc(colsA * sizeof(int));
    }

    // Input elements for matrix A
    printf("Enter elements for matrix A:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &ptrA[i][j]);
        }
    }

    // Allocate memory for matrix B
    int** ptrB = (int**)malloc(rowsB * sizeof(int*));
    for (int i = 0; i < rowsB; i++) {
        ptrB[i] = (int*)malloc(colsB * sizeof(int));
    }

    // Input elements for matrix B
    printf("Enter elements for matrix B:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &ptrB[i][j]);
        }
    }

    multiplication(ptrA, ptrB, rowsA, colsA, rowsB, colsB);

  

    return 0;
}
