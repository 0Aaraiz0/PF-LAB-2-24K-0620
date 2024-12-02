#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int numStudents;
    float sum = 0;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < numStudents; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks for %s: ", students[i].name);
        scanf("%d", &students[i].marks);
        sum += students[i].marks;
    }

    float average = sum / numStudents;
    printf("\nThe average marks of the class are: %.2f\n", average);

    return 0;
}

