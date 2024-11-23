#include <stdio.h>
#include <string.h>

struct Flight {
    int flightNumber;
    char departureCity[50];
    char destinationCity[50];
    char date[15];
    int availableSeats;
};

void displayFlightDetails(struct Flight flights[], int count);
void bookSeat(struct Flight flights[], int count);

int main() {
    struct Flight flights[5] = {
        {101, "New York", "Los Angeles", "2024-11-15", 30},
        {102, "Chicago", "Houston", "2024-11-16", 25},
        {103, "San Francisco", "Seattle", "2024-11-17", 40},
        {104, "Miami", "Orlando", "2024-11-18", 35},
        {105, "Dallas", "Denver", "2024-11-19", 20}
    };

    int choice;
    do {
        printf("\n--- Flight Management System ---\n");
        printf("1. Display Flight Details\n");
        printf("2. Book a Seat\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            displayFlightDetails(flights, 5);
        } else if (choice == 2) {
            bookSeat(flights, 5);
        } else if (choice != 3) {
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    printf("Exiting the program. Thank you!\n");
    return 0;
}

void displayFlightDetails(struct Flight flights[], int count) {
    printf("\n--- Flight Details ---\n");
    for (int i = 0; i < count; i++) {
        printf("Flight Number: %d\n", flights[i].flightNumber);
        printf("Departure City: %s\n", flights[i].departureCity);
        printf("Destination City: %s\n", flights[i].destinationCity);
        printf("Date: %s\n", flights[i].date);
        printf("Available Seats: %d\n", flights[i].availableSeats);
        printf("-----------------------------\n");
    }
}

void bookSeat(struct Flight flights[], int count) {
    int flightNumber;
    printf("\nEnter the flight number you want to book a seat for: ");
    scanf("%d", &flightNumber);

    for (int i = 0; i < count; i++) {
        if (flights[i].flightNumber == flightNumber) {
            if (flights[i].availableSeats > 0) {
                flights[i].availableSeats--;
                printf("Seat booked successfully! Remaining seats: %d\n", flights[i].availableSeats);
            } else {
                printf("No seats available for this flight.\n");
            }
        }
         else {printf("Flight not found. Please check the flight number and try again");}
    }
    
}
