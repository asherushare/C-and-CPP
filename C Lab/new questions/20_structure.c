#include <stdio.h>

// Define a structure to store student information
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Declare an array of structures to store information for 5 students
    struct Student students[5];

    // Input information for each student
    for (int i = 0; i < 5; i++) {
        printf("Enter information for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name); // Assuming names don't have spaces
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Display information for each student
    printf("Student Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}