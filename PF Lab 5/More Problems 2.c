#include <stdio.h>

int main() {
    float a, b, c, d;

    printf("Attendance Percentage: ");
    scanf("%f", &a);

    printf("Assignments Score Percentage: ");
    scanf("%f", &b);

    printf("Exam Results Percentage: ");
    scanf("%f", &c);

    d = (0.5*a + b + 1.5*c) / 3.0;

    if (d >= 50) {
        if (d < 60) {
            printf("D\n");
        } else if (d < 70) {
            printf("C\n");
        } else if (d < 80) {
            printf("B\n");
        } else if (d < 90) {
            printf("A\n");
        } else if (d <= 100) {
            printf("A+\n");
        }
    } else {
        printf("Fail\n");
    }

    return 0;
}
