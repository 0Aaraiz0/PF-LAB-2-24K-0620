#include <stdio.h>

int swap(int a, int b){

        b = a;
        return b;
}
int swap2(int a , int b){

    a = b;
    return a;
}
int main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    int b2 = swap(a , b);
    int a2 = swap2(a , b);

    printf("Value of a after swap is %d\n", a2);
    printf("Value of b after swap is %d", b2);

    return 0;
}