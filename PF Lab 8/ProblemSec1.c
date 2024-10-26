#include <stdio.h>
int main(){
    int amountofnumbers, a = 0;

    printf("How many numbers (smaller than 10) you want in your last line:");
    scanf("%d", &amountofnumbers);


    for(int i = 0; i <= amountofnumbers ; i++){
        a = 1;
        for(int j = 0; j < i ; j++){
            printf("%d", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}