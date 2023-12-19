#include <stdio.h>

int main() {
  int marks; // Store student's marks

  // Get input from the user
  printf("Enter the student's marks (0-100): ");
  scanf("%d", &marks);

  // Determine grade using if-else statements
  char grade; // Store the calculated grade
  if (marks < 50) {
    grade = 'F';
  } else if (marks < 60) {
    grade = 'C';
  } else if (marks < 70) {
    grade = 'B';
  } else if (marks < 80) {
    grade = 'B+';
  } else if (marks < 90) {
    grade = 'A';
  } else {
    grade = 'A+';
  }

  // Print result
  printf("The student's grade is: %c\n", grade);

  return 0;
}
