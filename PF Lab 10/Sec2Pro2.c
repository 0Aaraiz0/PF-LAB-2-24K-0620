#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Movie {
    char title[100];
    char genre[50];
    char director[100];
    int releaseYear;
    float rating;
};


void addMovie(struct Movie movies[], int *count);
void searchMoviesByGenre(struct Movie movies[], int count);
void displayAllMovies(struct Movie movies[], int count);

int main() {
    struct Movie movies[100]; 
    int count = 0;            
    int choice;

    while (1) {
        
        printf("\nMovie Database Menu:\n");
        printf("1. Add New Movie\n");
        printf("2. Search Movies by Genre\n");
        printf("3. Display All Movies\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                addMovie(movies, &count);
                break;
            case 2:
                searchMoviesByGenre(movies, count);
                break;
            case 3:
                displayAllMovies(movies, count);
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                return 0; 
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void addMovie(struct Movie movies[], int *count) {
    if (*count >= 100) {
        printf("Database is full! Cannot add more movies.\n");
        return;
    }

    printf("\nEnter movie details:\n");
    printf("Title: ");
    fgets(movies[*count].title, sizeof(movies[*count].title), stdin);
    strtok(movies[*count].title, "\n"); 

    printf("Genre: ");
    fgets(movies[*count].genre, sizeof(movies[*count].genre), stdin);
    strtok(movies[*count].genre, "\n");

    printf("Director: ");
    fgets(movies[*count].director, sizeof(movies[*count].director), stdin);
    strtok(movies[*count].director, "\n");

    printf("Release Year: ");
    scanf("%d", &movies[*count].releaseYear);
    getchar(); 

    printf("Rating (0.0 to 10.0): ");
    scanf("%f", &movies[*count].rating);
    getchar(); 

    (*count)++;
    printf("Movie added successfully!\n");
}

void searchMoviesByGenre(struct Movie movies[], int count) {
    char genre[50];
    int found = 0;

    printf("\nEnter genre to search: ");
    fgets(genre, sizeof(genre), stdin);
    strtok(genre, "\n");

    printf("\nMovies in genre '%s':\n", genre);
    for (int i = 0; i < count; i++) {
        if (strcasecmp(movies[i].genre, genre) == 0) { 
            printf("Title: %s, Director: %s, Release Year: %d, Rating: %.1f\n",
                   movies[i].title, movies[i].director, movies[i].releaseYear, movies[i].rating);
            found = 1;
        }
    }

    if (!found) {
        printf("No movies found in the genre '%s'.\n", genre);
    }
}

void displayAllMovies(struct Movie movies[], int count) {
    if (count == 0) {
        printf("\nNo movies in the database.\n");
        return;
    }

    printf("\nAll Movies:\n");
    for (int i = 0; i < count; i++) {
        printf("Title: %s, Genre: %s, Director: %s, Release Year: %d, Rating: %.1f\n",
               movies[i].title, movies[i].genre, movies[i].director, movies[i].releaseYear, movies[i].rating);
    }
}
