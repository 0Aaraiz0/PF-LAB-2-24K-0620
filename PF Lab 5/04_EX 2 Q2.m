#include <stdio.h>
int main() {
int age;
int CitizenShipStatusIsPakistan = 1;
printf("Write Your Age : ");
scanf("%d", &age);

if (age >= 18 && CitizenShipStatusIsPakistan) {
printf("You are eligible to vote.\n");
} else {
printf("You are not eligible to vote.\n");
}
return 0;
}
