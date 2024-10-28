#include <stdio.h>

int even(int a){
    int c = a % 2;
    return c;
}

int main(){
    int c = even(4);
    if(c == 0){
        printf("number is even");
        }
        else printf("Number is odd");
        return 0;
    }
