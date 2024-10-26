#include<stdio.h>
int main(){
    int maxnumber, a = 0, j = 0, k;
    printf("Tell the maximum odd number: ");
    scanf("%d", &maxnumber);
    int arr[maxnumber];

    for(int i = maxnumber ; i > 0 ; i--){
        if(i%2==1){
            arr[j] = i;
            j++;
            a++;
        }
    }
    for(int line = 0 ; line < a ; line++){
        for(k = 0; k < j ; k++){
        printf("%d ", arr[k]);
    }
    j--;
    printf("\n");
    }
    return 0;
}