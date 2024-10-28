#include <stdio.h>
#include <string.h>
int main(){
    char scr[100];
    char des[100];

    printf("Enter scr string : ");
    fgets(scr, sizeof(scr), stdin);

    printf("Enter des string : ");
    fgets(des, sizeof(des), stdin);


    int n;
    printf("Enter number of chars to append: ");
    scanf("%d", &n);

    strncpy(des, scr, n);
    printf("%s", des);
    return 0;
}