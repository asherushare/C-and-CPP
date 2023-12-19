#include <stdio.h>
#include <string.h>

union Person {
 char name[50];
 int age;
 float salary;
};

int main() {
 union Person person;

 // Get user input
 printf("Enter the person's name: ");
 fgets(person.name, 50, stdin);  // Use fgets to handle spaces in names
 person.name[strcspn(person.name, "\n")] = '\0';
  // Remove trailing newline
 printf("\nName: %s\n", person.name);

 printf("Enter the person's age: ");
 scanf("%d", &person.age);
printf("Age: %d\n", person.age);

 printf("Enter the person's salary: ");
 scanf("%f", &person.salary);

 // Print the information (accessing members in a specific order)
 
 printf("Salary: %.2f\n", person.salary);

 return 0;
}
