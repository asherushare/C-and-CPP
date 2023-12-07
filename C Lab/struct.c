#include <stdio.h>

// Define the structure for subject marks
struct SubjectMarks {
    float subject1;
    float subject2;
    float subject3;
    float subject4;
    float subject5;
};

// Define the structure for student details
struct Student {
    char name[50];
    int rollNumber;
    struct SubjectMarks marks;
};

int main() {
    // Declare a variable of type Student
    struct Student student;

    // Input student details
    printf("Enter student name: ");
    scanf("%s", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    // Input marks for 5 subjects
    printf("Enter marks for subject 1: ");
    scanf("%f", &student.marks.subject1);

    printf("Enter marks for subject 2: ");
    scanf("%f", &student.marks.subject2);

    printf("Enter marks for subject 3: ");
    scanf("%f", &student.marks.subject3);

    printf("Enter marks for subject 4: ");
    scanf("%f", &student.marks.subject4);

    printf("Enter marks for subject 5: ");
    scanf("%f", &student.marks.subject5);

    // Calculate total marks and percentage
    float totalMarks = student.marks.subject1 + student.marks.subject2 +
                      student.marks.subject3 + student.marks.subject4 + student.marks.subject5;

    float percentage = (totalMarks / 500) * 100;

    // Display student details and results
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);

    printf("\nSubject-wise Marks:\n");
    printf("Subject 1: %.2f\n", student.marks.subject1);
    printf("Subject 2: %.2f\n", student.marks.subject2);
    printf("Subject 3: %.2f\n", student.marks.subject3);
    printf("Subject 4: %.2f\n", student.marks.subject4);
    printf("Subject 5: %.2f\n", student.marks.subject5);

    printf("\nTotal Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
