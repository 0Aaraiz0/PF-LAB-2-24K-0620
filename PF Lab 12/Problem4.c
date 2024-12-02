#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct book {
    char title[50]; 
    char author[50];
    int publicationYear;
} Book; 

typedef struct library {
    Book book; 
} Library;

int main() {
    Library* ptr = (Library*)malloc(5 * sizeof(Library)); 

    for (int i = 0; i < 5; i++) {
        printf("Enter title: ");
        fgets(ptr[i].book.title, sizeof(ptr[i].book.title), stdin);

        printf("Enter author: ");
        fgets(ptr[i].book.author, sizeof(ptr[i].book.author), stdin);

        printf("Enter year: ");
        scanf("%d", &ptr[i].book.publicationYear);
    }

    for (int i = 0; i < 5; i++) {
        if(ptr[i].book.publicationYear > 2000){
        printf("Title: %s\n", ptr[i].book.title);
        }
    }

    return 0;
}
