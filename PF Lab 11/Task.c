#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct player {
    char name[20];
    char team[20];
};

struct bowl {
    char type[10]; 
    char arm[5];   
    struct player ply;
};

struct bat {
    char type[10];   
    char handed[8]; 
    struct bowl ply2; 
};

void createPlayer(FILE *file);
void readPlayers(FILE *file);
void updatePlayer(FILE *file);
void deletePlayer(FILE *file);

int main() {
    FILE *file;
    int choice;

    while (1) {
        printf("\n--- Player Management System ---\n");
        printf("1. Add Player\n");
        printf("2. View Players\n");
        printf("3. Update Player\n");
        printf("4. Delete Player\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                file = fopen("players.dat", "ab");
                if (!file) {
                    perror("File opening failed");
                    return 1;
                }
                createPlayer(file);
                fclose(file);
                break;
            case 2:
                file = fopen("players.dat", "rb");
                if (!file) {
                    perror("File opening failed");
                    return 1;
                }
                readPlayers(file);
                fclose(file);
                break;
            case 3:
                file = fopen("players.dat", "rb+");
                if (!file) {
                    perror("File opening failed");
                    return 1;
                }
                updatePlayer(file);
                fclose(file);
                break;
            case 4:
                deletePlayer(file);
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

void createPlayer(FILE *file) {
    struct bat playerData;

    printf("Enter player name: ");
    fgets(playerData.ply2.ply.name, 20, stdin);
    strtok(playerData.ply2.ply.name, "\n"); 

    printf("Enter team name: ");
    fgets(playerData.ply2.ply.team, 20, stdin);
    strtok(playerData.ply2.ply.team, "\n");

    printf("Enter bowler type (seemer/pacer/spinner or N/A): ");
    fgets(playerData.ply2.type, 10, stdin);
    strtok(playerData.ply2.type, "\n");

    printf("Enter bowler arm (left/right): ");
    fgets(playerData.ply2.arm, 5, stdin);
    strtok(playerData.ply2.arm, "\n");

    printf("Enter batter type (top/middle/lower order): ");
    fgets(playerData.type, 10, stdin);
    strtok(playerData.type, "\n");

    printf("Enter batter handedness (lefty/righty): ");
    fgets(playerData.handed, 8, stdin);
    strtok(playerData.handed, "\n");

    fwrite(&playerData, sizeof(struct bat), 1, file);
    printf("Player added successfully!\n");
}

void readPlayers(FILE *file) {
    struct bat playerData;

    printf("\n--- Player List ---\n");
    while (fread(&playerData, sizeof(struct bat), 1, file)) {
        printf("\nName: %s\n", playerData.ply2.ply.name);
        printf("Team: %s\n", playerData.ply2.ply.team);
        printf("Bowler Type: %s\n", playerData.ply2.type);
        printf("Bowler Arm: %s\n", playerData.ply2.arm);
        printf("Batter Type: %s\n", playerData.type);
        printf("Batter Handedness: %s\n", playerData.handed);
    }
}

void updatePlayer(FILE *file) {
    struct bat playerData;
    char searchName[20];
    int found = 0;

    printf("Enter the name of the player to update: ");
    fgets(searchName, 20, stdin);
    strtok(searchName, "\n");

    while (fread(&playerData, sizeof(struct bat), 1, file)) {
        if (strcmp(playerData.ply2.ply.name, searchName) == 0) {
            found = 1;
            printf("Enter new team name: ");
            fgets(playerData.ply2.ply.team, 20, stdin);
            strtok(playerData.ply2.ply.team, "\n");

            printf("Enter new bowler type: ");
            fgets(playerData.ply2.type, 10, stdin);
            strtok(playerData.ply2.type, "\n");

            printf("Enter new bowler arm: ");
            fgets(playerData.ply2.arm, 5, stdin);
            strtok(playerData.ply2.arm, "\n");

            printf("Enter new batter type: ");
            fgets(playerData.type, 10, stdin);
            strtok(playerData.type, "\n");

            printf("Enter new batter handedness: ");
            fgets(playerData.handed, 8, stdin);
            strtok(playerData.handed, "\n");

            fseek(file, -sizeof(struct bat), SEEK_CUR);
            fwrite(&playerData, sizeof(struct bat), 1, file);
            printf("Player updated successfully!\n");
            break;
        }
    }
    if (!found) {
        printf("Player not found.\n");
    }
}

void deletePlayer(FILE *file) {
    struct bat playerData;
    FILE *tempFile = fopen("temp.dat", "wb");
    char searchName[20];
    int found = 0;

    if (!tempFile) {
        perror("Temporary file creation failed");
        return;
    }

    file = fopen("players.dat", "rb");
    if (!file) {
        perror("File opening failed");
        return;
    }

    printf("Enter the name of the player to delete: ");
    fgets(searchName, 20, stdin);
    strtok(searchName, "\n");

    while (fread(&playerData, sizeof(struct bat), 1, file)) {
        if (strcmp(playerData.ply2.ply.name, searchName) != 0) {
            fwrite(&playerData, sizeof(struct bat), 1, tempFile);
        } else {
            found = 1;
        }
    }
    fclose(file);
    fclose(tempFile);

    if (found) {
        remove("players.dat");
        rename("temp.dat", "players.dat");
        printf("Player deleted successfully!\n");
    } else {
        remove("temp.dat");
        printf("Player not found.\n");
    }
}
