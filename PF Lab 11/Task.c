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

void createPlayer();
void readPlayers();
void updatePlayer();
void deletePlayer();

int main() {
    int choice;

    while (1) {
        printf("\n--- Cricket Player Management System ---\n");
        printf("1. Add Player\n");
        printf("2. View Players\n");
        printf("3. Update Player\n");
        printf("4. Delete Player\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                createPlayer();
                break;
            case 2:
                readPlayers();
                break;
            case 3:
                updatePlayer();
                break;
            case 4:
                deletePlayer();
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

void createPlayer() {
    FILE *file = fopen("players.txt", "a");
    if (!file) {
        perror("File opening failed");
        return;
    }

    struct bat playerData;

    printf("Enter player name: ");
    fgets(playerData.ply2.ply.name, sizeof(playerData.ply2.ply.name), stdin);
    strtok(playerData.ply2.ply.name, "\n");

    printf("Enter team name: ");
    fgets(playerData.ply2.ply.team, sizeof(playerData.ply2.ply.team), stdin);
    strtok(playerData.ply2.ply.team, "\n");

    printf("Enter bowler type (seemer/pacer/spinner or N/A): ");
    fgets(playerData.ply2.type, sizeof(playerData.ply2.type), stdin);
    strtok(playerData.ply2.type, "\n");

    printf("Enter bowler arm (left/right): ");
    fgets(playerData.ply2.arm, sizeof(playerData.ply2.arm), stdin);
    strtok(playerData.ply2.arm, "\n");

    printf("Enter batter type (top/middle/lower order): ");
    fgets(playerData.type, sizeof(playerData.type), stdin);
    strtok(playerData.type, "\n");

    printf("Enter batter handedness (lefty/righty): ");
    fgets(playerData.handed, sizeof(playerData.handed), stdin);
    strtok(playerData.handed, "\n");

    fprintf(file, "%s,%s,%s,%s,%s,%s\n", playerData.ply2.ply.name, playerData.ply2.ply.team,
            playerData.ply2.type, playerData.ply2.arm,
            playerData.type, playerData.handed);

    printf("Player added successfully!\n");
    fclose(file);
}

void readPlayers() {
    FILE *file = fopen("players.txt", "r");
    if (!file) {
        perror("File opening failed");
        return;
    }

    struct bat playerData;
    printf("\n--- Player List ---\n");
    while (fscanf(file, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n",
                  playerData.ply2.ply.name, playerData.ply2.ply.team,
                  playerData.ply2.type, playerData.ply2.arm,
                  playerData.type, playerData.handed) != EOF) {
        printf("\nName: %s\n", playerData.ply2.ply.name);
        printf("Team: %s\n", playerData.ply2.ply.team);
        printf("Bowler Type: %s\n", playerData.ply2.type);
        printf("Bowler Arm: %s\n", playerData.ply2.arm);
        printf("Batter Type: %s\n", playerData.type);
        printf("Batter Handedness: %s\n", playerData.handed);
    }

    fclose(file);
}

void updatePlayer() {
    FILE *file = fopen("players.txt", "r");
    FILE *tempFile = fopen("temp.txt", "w");
    if (!file || !tempFile) {
        perror("File opening failed");
        return;
    }

    struct bat playerData;
    char searchName[20];
    int found = 0;

    printf("Enter the name of the player to update: ");
    fgets(searchName, sizeof(searchName), stdin);
    strtok(searchName, "\n");

    while (fscanf(file, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n",
                  playerData.ply2.ply.name, playerData.ply2.ply.team,
                  playerData.ply2.type, playerData.ply2.arm,
                  playerData.type, playerData.handed) != EOF) {
        if (strcmp(playerData.ply2.ply.name, searchName) == 0) {
            found = 1;

            printf("Enter new team name: ");
            fgets(playerData.ply2.ply.team, sizeof(playerData.ply2.ply.team), stdin);
            strtok(playerData.ply2.ply.team, "\n");

            printf("Enter new bowler type: ");
            fgets(playerData.ply2.type, sizeof(playerData.ply2.type), stdin);
            strtok(playerData.ply2.type, "\n");

            printf("Enter new bowler arm: ");
            fgets(playerData.ply2.arm, sizeof(playerData.ply2.arm), stdin);
            strtok(playerData.ply2.arm, "\n");

            printf("Enter new batter type: ");
            fgets(playerData.type, sizeof(playerData.type), stdin);
            strtok(playerData.type, "\n");

            printf("Enter new batter handedness: ");
            fgets(playerData.handed, sizeof(playerData.handed), stdin);
            strtok(playerData.handed, "\n");
        }

        fprintf(tempFile, "%s,%s,%s,%s,%s,%s\n", playerData.ply2.ply.name, playerData.ply2.ply.team,
                playerData.ply2.type, playerData.ply2.arm,
                playerData.type, playerData.handed);
    }

    fclose(file);
    fclose(tempFile);

    if (found) {
        remove("players.txt");
        rename("temp.txt", "players.txt");
        printf("Player updated successfully!\n");
    } else {
        remove("temp.txt");
        printf("Player not found.\n");
    }
}

void deletePlayer() {
    FILE *file = fopen("players.txt", "r");
    FILE *tempFile = fopen("temp.txt", "w");
    if (!file || !tempFile) {
        perror("File opening failed");
        return;
    }

    struct bat playerData;
    char searchName[20];
    int found = 0;

    printf("Enter the name of the player to delete: ");
    fgets(searchName, sizeof(searchName), stdin);
    strtok(searchName, "\n");

    while (fscanf(file, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n",
                  playerData.ply2.ply.name, playerData.ply2.ply.team,
                  playerData.ply2.type, playerData.ply2.arm,
                  playerData.type, playerData.handed) != EOF) {
        if (strcmp(playerData.ply2.ply.name, searchName) != 0) {
            fprintf(tempFile, "%s,%s,%s,%s,%s,%s\n", playerData.ply2.ply.name, playerData.ply2.ply.team,
                    playerData.ply2.type, playerData.ply2.arm,
                    playerData.type, playerData.handed);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(tempFile);

    if (found) {
        remove("players.txt");
        rename("temp.txt", "players.txt");
        printf("Player deleted successfully!\n");
    } else {
        remove("temp.txt");
        printf("Player not found.\n");
    }
}
