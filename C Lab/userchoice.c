#include<stdio.h>
int main(){
  int a;
  int b;

  printf("Enter two numbers: ");
  scanf("%d%d",&a,&b);

  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");

  int choice;
  printf("Enter your choice: ");
  scanf("%d",&choice);

  switch(choice){
    case 1:
      printf("The addition of %d and %d is %d\n",a,b,a+b);
      break;
    case 2:
      printf("The subtraction of %d and %d is %d\n",a,b,a-b);
      break;
    case 3:
      printf("The multiplication of %d and %d is %d\n",a,b,a*b);
      break;
    default:
      printf("Invalid choice\n");
  }
  return 0;
}