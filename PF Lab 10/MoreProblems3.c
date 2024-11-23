#include <stdio.h>

#define MAX_TEMP 37.0

void checkTemperature(float temp) {
    static int exceedCount = 0;

    if (temp > MAX_TEMP) {
        printf("Temperature %.2f°C exceeds the maximum limit of %.2f°C.\n", temp, MAX_TEMP);
        exceedCount++;
    } else {
        printf("Temperature %.2f°C is within the allowable limit.\n", temp);
    }

    printf("Total times temperature exceeded so far: %d\n", exceedCount);
}

int main() {
    float temperature;

    printf("Enter temperatures (in Celsius). Enter -1 to stop.\n");

    while (1) {
        printf("Enter temperature: ");
        scanf("%f", &temperature);

        if (temperature == -1) {
            break;
        }

        checkTemperature(temperature);
    }

    printf("Program terminated.\n");
    return 0;
}
