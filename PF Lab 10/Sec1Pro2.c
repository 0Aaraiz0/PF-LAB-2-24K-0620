#include <stdio.h>
#include <string.h>

char* reverseString(char str[], int start, int end) {
    if (start >= end) {
        return str; 
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    return reverseString(str, start + 1, end - 1);  
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);
    char* reversedStr = reverseString(str, 0, length - 1);

    printf("Reversed string: %s\n", reversedStr);

    return 0;
}