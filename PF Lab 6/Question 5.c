#include <stdio.h>
int main(){
for(int n = 65536, a = 1 ; a <= 9;)
{
    n = n/a;
    a ++;
printf("%d " , n);
}
return 0;
}
