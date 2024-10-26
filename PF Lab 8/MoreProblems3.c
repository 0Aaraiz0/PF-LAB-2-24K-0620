#include <stdio.h>

int main() {
    int arr[3][3] = {{10, 11, 12}, {8, 5, 6}, {5, 12, 9}};
    
    for (int i = 0; i < 3; i++) {
        int rowMin = arr[i][0];
        int colIndex = 0;

        for (int j = 1; j < 3; j++) {
            if (arr[i][j] < rowMin) {
                rowMin = arr[i][j];
                colIndex = j;
            }
        }

        int isSaddlePoint = 1;

        for (int m = 0; m < 3; m++) {
            if (arr[m][colIndex] > rowMin) {
                isSaddlePoint = 0;
                break;
            }
        }

        if (isSaddlePoint) {
            printf("Saddle point: %d\n", rowMin);
            break;
        }
         else printf("No saddle points found.\n");
    }

    return 0;
}