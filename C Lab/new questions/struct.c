#include <stdio.h>

struct Person {
  char name[20];
  int age;
  float salary;
};

int main() {
  struct Person person;

  printf("Enter person name: ");
  scanf("%s", person.name);

  printf("Enter person age: ");
  scanf("%d", &person.age);

  printf("Enter person salary: ");
  scanf("%f", &person.salary);

  printf("\nPerson's name is: %s\n", person.name);
  printf("Person's age is: %d\n", person.age);
  printf("Person's salary is: %f\n", person.salary);

  return 0;
}
