#include <stdio.h>
#include <string.h>

typedef struct {
    char packageName[50];
    char destination[50];
    int duration;       // in days
    float cost;         // per person
    int seatsAvailable; // number of seats available
} TravelPackage;

void displayPackages(TravelPackage packages[], int numPackages) {
    printf("\nAvailable Travel Packages:\n");
    for (int i = 0; i < numPackages; i++) {
        if (packages[i].seatsAvailable > 0) {
            printf("Package %d:\n", i + 1);
            printf("  Name: %s\n", packages[i].packageName);
            printf("  Destination: %s\n", packages[i].destination);
            printf("  Duration: %d days\n", packages[i].duration);
            printf("  Cost: $%.2f per person\n", packages[i].cost);
            printf("  Seats Available: %d\n\n", packages[i].seatsAvailable);
        }
    }
}

void bookPackage(TravelPackage packages[], int numPackages) {
    int choice, seatsToBook;

    printf("\nEnter the package number to book: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > numPackages) {
        printf("Invalid package number!\n");
        return;
    }

    choice--;

    if (packages[choice].seatsAvailable <= 0) {
        printf("Sorry, no seats are available for this package.\n");
        return;
    }

    printf("Enter the number of seats to book: ");
    scanf("%d", &seatsToBook);

    if (seatsToBook > packages[choice].seatsAvailable) {
        printf("Only %d seats are available. Booking failed.\n", packages[choice].seatsAvailable);
    } else {
        packages[choice].seatsAvailable -= seatsToBook;
        printf("Booking successful! You booked %d seat(s) for the package '%s'.\n",
               seatsToBook, packages[choice].packageName);
    }
}

int main() {
    TravelPackage packages[5] = {
        {"Beach Paradise", "Maldives", 7, 1500.00, 10},
        {"Mountain Adventure", "Nepal", 10, 1200.00, 5},
        {"City Explorer", "Paris", 5, 2000.00, 8},
        {"Safari Experience", "Kenya", 6, 1800.00, 7},
        {"Cruise Delight", "Caribbean", 12, 3000.00, 4}
    };
    int numPackages = 5;
    int choice;

    while (1) {
        printf("\nTravel Package Management System\n");
        printf("1. Display Available Packages\n");
        printf("2. Book a Package\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayPackages(packages, numPackages);
                break;
            case 2:
                bookPackage(packages, numPackages);
                break;
            case 3:
                printf("Exiting the program. Have a great day!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
 