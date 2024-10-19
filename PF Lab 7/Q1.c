#include <stdio.h>
int main(){
    
int number, sum = 0;
printf("How many numbers you want sum of : ");
scanf("%d", &number);
int arr[number];

    for ( int i = 0 ; i < number ; i++){
        printf("Enter a number : ");
        scanf("%d", & arr[i]);
        sum += arr[i];
    }
    printf("Your sum is %d", sum);
    return 0;
}