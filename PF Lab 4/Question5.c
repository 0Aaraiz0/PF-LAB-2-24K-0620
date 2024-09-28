

#include <stdio.h>

int main() {        
    float C = 0.0;     
    float B = 0.0; 
    float Z = 0.0;     
    float Unit;        
    float F;           
    int ID;          

    printf("ID of Customer: ");
    scanf("%d", &ID);

    printf("Total Unit Consumption: ");
    scanf("%f", &Unit);

    if (Unit <= 199) {
        C = 16.2;
        B = C * Unit;
    } 
else if (Unit >= 200 && Unit < 300) {
        C = 20.1;
        B = C * Unit;
    } 
else if (Unit >= 300 && Unit < 500) {
        C = 27.1;
        B = C * Unit;
    } 
else if (Unit >= 500) {
        C = 35.9;
        B = C * Unit;
    }

    if (B <= 18000) {
        printf("Customer ID: %d\n", ID);
        printf("Total Units Consumption: %.2f\n", Unit);
        printf("Charge per Unit: %.1f\n", C);
        printf("Net Amount Paid by the Customer: %.2f\n", B);
    } 
else {
        F = B * 0.15;
        Z= B + F; 
        printf("Customer ID: %d\n", ID);
        printf("Total Units Consumption: %.2f\n", Unit);
        printf("Charge per Unit: %.1f\n", C);
        printf("Surcharge Amount: %.2f\n", F);
        printf("Net Amount Paid by the Customer: %.2f\n", Z);
    }

    return 0;
}
 
	


