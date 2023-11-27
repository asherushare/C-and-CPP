#include <stdio.h>

int main() {
  int a = 12;
  int b = 25;

  // Bitwise AND operation
  int andResult = a & b;
  printf("Bitwise AND of %d and %d is %d\n", a, b, andResult);

  // Bitwise OR operation
  int orResult = a | b;
  printf("Bitwise OR of %d and %d is %d\n", a, b, orResult);

  // Bitwise XOR operation
  int xorResult = a ^ b;
  printf("Bitwise XOR of %d and %d is %d\n", a, b, xorResult);

  // Bitwise complement operation
  int complementResult = ~a;
  printf("Bitwise complement of %d is %d\n", a, complementResult);

  return 0;
}
