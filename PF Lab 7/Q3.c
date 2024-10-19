#include <stdio.h>
int main(){
    int counta, countb, a ,max = 0, min = 1000000 ;

    printf("How many positive numbers you want to enter (smaller than 1000000 ) : ");
    scanf("%d", &a);

    int arr[a];

    for(int i = 0; i < a; i++){
        printf("Enter the number : ");
        scanf("%d", &arr[i]);
    }

    for(int d = 0; d<a; d++){

        if(arr[d]>max){
            max = arr[d];
        }
    }

    for(int e = 0; e<a; e++){

        if(arr[e] < min){
            min = arr[e];
        }
    }
printf("Maximum is %d\n", max);
printf("Min is %d", min);

return 0;
}