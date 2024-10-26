#include <stdio.h>
int main()
{
    int arr[3][3][2] , a , sum1 = 0, sum2 = 0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("Enter %d row, %d column , %d in z direction : ", i+1,j+1,k+1);
                scanf("%d",  &arr[i][j][k]);
            }
        }
    }

     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 1; k++)
            {
                sum1 += arr[i][j][k];
            }
            
        }
    }

      for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 1; k < 2; k++)
            {
                sum2 += arr[i][j][k];
            }
            
        }
    }
    printf("Sum of 1st matrix is %d\n", sum1);
    printf("Sum of 2nd matrix is %d", sum2);

    return 0;
}