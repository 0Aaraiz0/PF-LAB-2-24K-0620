#include <stdio.h>
int main(){
    int min, max , a=0, d , b;

    printf("Enter max number of range : ");
    scanf("%d", &max);

    printf("Enter min number of range : ");
    scanf("%d", &min);

    for(int i = min ; i <= max ; i++){
        b = 0;
        for(int j = 2 ; j < i ; j++){

            if(i%j == 0){
             b = 1;
            }
        }
           if(b == 0){
            printf("%d ", i);
        }
        }

    return 0;
}