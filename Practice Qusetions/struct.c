#include<stdio.h>
#include<string.h>

struct student{
  char name[50];
  int age;
  int salary;
};

int main(){

  struct student st;
  printf("Enter name: ");
  scanf("%s",st.name);

  printf("\nEnter age: ");
  scanf("%d",&st.age);

  printf("\nEnter salary: ");
  scanf("%d",&st.salary);

  printf("\nname: %s\n",st.name);
  printf("age: %d\n",st.age);
  printf("salary: %d\n",st.salary);
  

  return 0;
}