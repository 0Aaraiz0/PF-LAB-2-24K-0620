#include <stdio.h>
#include <stdlib.h>

int main(){

    int size , sum = 0;
    printf("Write size of array: ");
    scanf("%d", &size);

    int* ptr = (int*)malloc(size*sizeof(int));

    for(int i = 0 ; i < size ; i++){
        printf("Enter %d integer: ", i+1);
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }
    printf("Sum is %d", sum);
    free(ptr);

    return 0;
}