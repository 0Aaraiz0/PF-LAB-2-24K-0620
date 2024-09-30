#include <stdio.h>
int main(){
int n = 0 , sum = 0;

for( int a = 1 , b = 2 ; n < 7 ; n = n + 1)
{
    sum = a * b;
    a = b;
    b = sum;
printf("%d\n" , sum);
}
return 0;
}
