#include <stdio.h>


int product(int a, int b){
    int c = a * b;
    return c;
}

int main(){
    int c = product(5, 4);
    printf("Product is %d", c);
    return 0;
}