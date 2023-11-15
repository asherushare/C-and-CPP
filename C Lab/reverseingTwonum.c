#include <stdio.h>

int main() {
  int num1, num2;

  // Reading two numbers from user
  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);

  // Printing numbers in reverse order using a third variable
  // int temp = num1;
  // num1 = num2;
  // num2 = temp;
  // printf("Numbers in reverse order (using a third variable): %d %d\n", num1, num2);

  // Printing numbers in reverse order without using a third variable
  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;
  printf("Numbers in reverse order (without using a third variable): %d %d\n", num1, num2);

  return 0;
}
