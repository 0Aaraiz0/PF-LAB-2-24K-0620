#include <stdio.h>
int main(){
int n, a, b ;
printf("Write a number you want to add in your previos number : ");
scanf("%d",&n);

while (n != 0)
{
printf("Write a number you want to add in your previos number : ");
scanf("%d",&a);
    n = n + a;
    printf("Your sum is now %d\n", n);
}
b = n;
printf("Your sum is now %d\n", b);
return 0;
}
