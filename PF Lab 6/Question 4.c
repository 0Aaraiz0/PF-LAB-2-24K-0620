#include <stdio.h>
int main(){
int n = 0 , sum = 0;

for( int a = 1, b = 1 ; n <= 6 ; n = n + 1)
{
    a = b;
    b = sum;
    sum = a + b;
printf("%d " , sum);
}
return 0;
}
