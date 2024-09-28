/* 
* Name: Aaraiz Nadeem 
* Date: 09-Sept-2024 * 
Desc: Check if “This number is multiple of 3” 
*/

#include <stdio.h>

int main()
{
int n;
printf("Write a Number = ");
scanf("%d", &n);

if (n%3==0)
            printf("%d is multiple of 3", n);
else 
            printf("%d is not a multiple of 3", n);
return 0;
}