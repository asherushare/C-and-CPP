#include<stdio.h>

int main(){

  int intType;
  char charType;
  float floatType;
  double doubleType;

  printf("Size of int: %d\n",sizeof(intType));
  printf("Size of float: %d\n",sizeof(floatType));
  printf("Size of char: %d\n",sizeof(charType));
  printf("Size of double: %d\n",sizeof(doubleType));

  return 0;
}