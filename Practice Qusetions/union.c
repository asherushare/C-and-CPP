#include<stdio.h>
#include<string.h>

union info {
  char name[50];
  int age;
  int salary;
};

int main() {
  union info person;

  printf("Enter name: ");
  scanf("%s", person.name);

  printf("Enter age: ");
  scanf("%d", &person.age);

  printf("Enter salary: ");
  scanf("%d", &person.salary);

  return 0;
}


// #include<stdio.h>

// union PersonInfo {
//     char name[50];
//     int age;
//     float salary;
// };

// int main() {
//     union PersonInfo person;

//     printf("Enter name: ");
//     scanf("%s", person.name);

//     printf("Enter age: ");
//     scanf("%d", &person.age);

//     printf("Enter salary: ");
//     scanf("%f", &person.salary);

//     printf("\nPerson Information\n");
//     printf("Name: %s\n", person.name);
//     printf("Age: %d\n", person.age);
//     printf("Salary: %.2f\n", person.salary);

//     return 0;
// }
