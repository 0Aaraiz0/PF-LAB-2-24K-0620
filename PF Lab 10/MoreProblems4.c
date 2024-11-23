#include <stdio.h>
#include <string.h>

typedef struct cars {
    char make[30];
    char model[30];
    int year; 
    float price; 
    float mileage;
} cars;

int main() {
    cars information[50]; 
    int a;                
    int carNumber;       
    int d = 0;            
    char make[50];        
    int c = 0;            
    int terminated = 0;   

    while (1) {
        // Display menu
        printf("1. Add a Car\n");
        printf("2. Display a list of available cars\n");
        printf("3. Search for cars by make or model.\n");
        printf("4. Exit\n");
        scanf("%d", &a);

        switch (a) {
            case 1:
                printf("Enter the car number to add (1-50): ");
                scanf("%d", &carNumber);

                if (carNumber < 1 || carNumber > 50) {
                    printf("Invalid car number! Please enter a number between 1 and 50.\n");
                } else {
                    int index = carNumber - 1; 
                    printf("Enter make: ");
                    scanf("%s", information[index].make);
                    printf("Enter model: ");
                    scanf("%s", information[index].model);
                    printf("Enter year: ");
                    scanf("%d", &information[index].year);
                    printf("Enter price: ");
                    scanf("%f", &information[index].price);
                    printf("Enter mileage: ");
                    scanf("%f", &information[index].mileage);

                    if (index >= d) {
                        d = index + 1; 
                    }
                    printf("Car %d added/updated successfully.\n", carNumber);
                }
                break;

            case 2:
                printf("List of available cars:\n");
                for (int i = 0; i < d; i++) {
                    printf("Car %d\n", i + 1);
                    printf("Make: %s\n", information[i].make);
                    printf("Model: %s\n", information[i].model);
                    printf("Year: %d\n", information[i].year);
                    printf("Price: %.2f\n", information[i].price);
                    printf("Mileage: %.2f\n", information[i].mileage);
                    printf("\n");
                }
                break;

            case 3:
                printf("Enter make to search: ");
                scanf("%s", make);
                c = 0;
                for (int i = 0; i < d; i++) {
                    if (strcmp(make, information[i].make) == 0) {
                        printf("Car %d\n", i + 1);
                        printf("Make: %s\n", information[i].make);
                        printf("Model: %s\n", information[i].model);
                        printf("Year: %d\n", information[i].year);
                        printf("Price: %.2f\n", information[i].price);
                        printf("Mileage: %.2f\n", information[i].mileage);
                        printf("\n");
                        c++;
                    }
                }
                if (c == 0) {
                    printf("No cars matched your search.\n");
                }
                break;

            case 4:
                printf("Program Terminated\n");
                terminated = 1;
                break;

            default:
                printf("Invalid option! Please select from the menu.\n");
                break;
        }
        if (terminated == 1) {
            break;
        }
    }
    return 0;
}