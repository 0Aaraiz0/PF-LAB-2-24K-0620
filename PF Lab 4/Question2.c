/*
Name: Aaraiz Nadeem
Date: 9/9/24
Desc: Calculator with basic operator
*/

#include <stdio.h>
int main(){
int a, c, d;
char b;

printf("enter 1st number : \n ");
printf("enter operator : \n");
printf("enter 2nd number : \n"); 

scanf("%d %c %d", &a, &b, &c);

switch (b)
{
case '+':
    d =a+c;
    break;

case '-':
    d =a-c;
    break;

case '*':
    d =a*c;
    break;

case '/':
    d =a/c;
    break;
}

printf("Your Answer is %d", d);
return 0;
}


        

 