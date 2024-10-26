#include <stdio.h>
int main()
{
    int arr[4][4], a, b, arrt[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            printf("Enter number of %d row, %d column : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            printf(" %d ", arr[i][j]);
            printf("|");
        }
        printf("\n");
    }
    printf("\n");


    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            arrt[i][j] = arr[j][i];
        }
        printf("\n");
    }



    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            printf(" %d ", arrt[i][j]);
            printf("|");
        }
        printf("\n");
    }
    return 0;
}