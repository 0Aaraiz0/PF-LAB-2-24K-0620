/*
Name: Aaraiz Nadeem
Date: 9/9/24
Desc: Calculator with basic operator
*/

#include <stdio.h>

int main() {
    char X;

   
    printf("Enter something from keyboard: ");
    scanf("%c", &X);

    if (X >= 'a' && X <= 'z') {
        printf("This is a lowercase letter.\n");
    }
    else if (X >= 'A' && X <= 'Z') {
        printf("This is an uppercase letter.\n");
    }
   
    else if (X >= '0' && X <= '9') {
        printf("This is a digit.\n");
    }
  
    else {
        printf("This is a special character.\n");
    }

    return 0;
}