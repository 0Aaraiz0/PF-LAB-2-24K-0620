#include <stdio.h>
int main(){
int n;
printf("Enter a Num : ");
scanf("%d", & n);
while (n > 10 )
{
    printf("%d is a multiple digit number\n", n);
    printf("Enter a Num : ");
    scanf("%d", & n);
}
printf("%d is not a multiple digit number", n);


return 0;
}
