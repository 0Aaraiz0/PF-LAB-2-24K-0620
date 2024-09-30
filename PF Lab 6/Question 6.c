#include <stdio.h>
int main(){
int n = 1 , sum = 0;

for( int a = 1 , b = 1 ; n < 7 ; n = n + 1)
{
    sum = a * b;
    a = n;
    b = sum;
printf("%d\n" , sum);
}
return 0;
}
