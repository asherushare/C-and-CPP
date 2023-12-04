#include <stdio.h>

int main() {
  int a,b,c;
  printf("Enter three numbers: ");
  scanf("%d%d%d",&a,&b,&c);

  // Check condition i)
  if (a == b && c > b) {
    printf("Condition 1 is true\n");
  } else {
    printf("Condition 1 is false\n");
  }

  // Check condition ii)
  if (a == b && c < b) {
    printf("Condition 2 is true\n");
  } else {
    printf("Condition 2 is false\n");
  }

  // Check condition iii)
  if (a == b || c < b) {
    printf("Condition 3 is true\n");
  } else {
    printf("Condition 3 is false\n");
  }

  // Check condition iv)
  if (a != b || c < b) {
    printf("Condition 4 is true\n");
  } else {
    printf("Condition 4 is false\n");
  }

  return 0;
}
