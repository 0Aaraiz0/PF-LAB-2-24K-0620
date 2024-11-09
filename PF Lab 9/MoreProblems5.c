#include <stdio.h>
#include <string.h>

void reverse(char word[], char reversedword[]) {
    int length = strlen(word);
    int j = 0;

    for (int i = length - 1; i >= 0; i--) {
        reversedword[j] = word[i];
        j++;
    }
    reversedword[length] = '\0'; 
}

int main() {
    int num;
    printf("How many alphabets: ");
    scanf("%d", &num);

    char word[num + 1]; 
    char reversedword[num + 1];

    printf("Enter word: ");
    scanf("%s", word);

    reverse(word, reversedword);
    printf("Reversed word: %s\n", reversedword);

    return 0;
}