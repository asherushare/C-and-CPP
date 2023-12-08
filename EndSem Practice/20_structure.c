#include<stdio.h>

struct student{
  char name[30];
  int age;
  int salary;
};

int main(){

  struct student s[2];

  for(int i=0;i<2;i++){
    printf("Enter name of student %d\n",i+1);

    printf("name: ");
    scanf("%s",s[i].name);
    printf("age: ");
    scanf("%s",&s[i].age);
    printf("salary: ");
    scanf("%s",&s[i].salary);
  }

  for(int i=0;i<2;i++){
    printf("Name: %s\n",s[i].name);
    printf("age: %d\n",s[i].age);
    printf("salary: %d\n",s[i].salary);
  }

  return 0;
}