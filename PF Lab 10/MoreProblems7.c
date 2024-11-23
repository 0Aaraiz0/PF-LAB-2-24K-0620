#include <stdio.h>

#define Meter_To_Kilometer 0.001

void meterToKilometer(int a) {
    static int count = 0;
    float b = a * Meter_To_Kilometer;
    printf("Distance in kilometers: %.3f\n", b);
    count++;
    printf("Function has been called %d times.\n", count);
}

int main() {
    int a;

    while (1) {
        printf("Enter distance in meters (press -1 to end): ");
        scanf("%d", &a);
        if (a == -1) {
            return 0;
        }
        meterToKilometer(a);
    }
}
