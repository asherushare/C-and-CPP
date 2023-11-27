#include <stdio.h>

int main() {
  int a = 5;
  int b = 5;
  int c = 10;

  // Check if a equals to b and c is greater than b
  if (a == b && c > b) {
    printf("Condition 1 is true\n");
  } else {
    printf("Condition 1 is false\n");
  }

  // Check if a equals to b and c is less than b
  if (a == b && c < b) {
    printf("Condition 2 is true\n");
  } else {
    printf("Condition 2 is false\n");
  }

  // Check if a equals to b or c is less than b
  if (a == b || c < b) {
    printf("Condition 3 is true\n");
  } else {
    printf("Condition 3 is false\n");
  }

  // Check if a not equal to b or c is less than b
  if (a != b || c < b) {
    printf("Condition 4 is true\n");
  } else {
    printf("Condition 4 is false\n");
  }

  return 0;
}
