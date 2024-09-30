#include <stdio.h>
int main(){
    printf("1 ");
int n = 0 , sum = 0;

for( int a = 1 , b = 2 ; n < 7 ; n = n + 1)
{
    sum = a * b;
    a = b;
    b = sum;
printf("%d " , sum);
}
return 0;
}
