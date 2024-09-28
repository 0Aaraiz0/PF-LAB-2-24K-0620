



#include <stdio.h>
int main(){

float A; 
float B = 0.0; 
float C = 0.0; 
float D = 0.0;

printf("What is the total cost :\n");
scanf("%f", &A);

if (A >= 500 && A < 2000) {
        B = A * 0.05; 
        C = A - B;
        D = 2000 - A;
}

else if (A >= 2000 && A < 4000) {
        B = A * 0.1; 
        C = A - B;
	D = 4000 - A;
}
else if (A >= 4000 && A <= 6000) {
        B = A * 0.2; 
        C = A - B;
	D = 6000 - A;
}
 else if (A > 6000) {
        B = A * 0.35; 
        C = A - B;
	D = 0;
}
else if (A < 500) {
        printf("You have to buy items worth at least 500 for a minimum discount.\n");
        return 0; 
}
printf("Your total amount: %.2f\n", A);
    printf("You saved: %.2f\n", B);
    printf("You now have to pay: %.2f\n", C);

    if (D > 0) {
        printf("You can buy %.2f amount of more items to increase the discount.\n", D);
    }
return 0;
}
