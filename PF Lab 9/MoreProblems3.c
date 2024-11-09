#include <stdio.h>

void prime(int num){

    int a = 0;
    for(int i = 2 ; i < num ; i++){
        if(num%i==0){
            a++;
        }
    }
    if(a==0){
        printf("%d is prime", num);
    }
    else printf("%d is not prime", num);
}


int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    prime(num);
    return 0;
}