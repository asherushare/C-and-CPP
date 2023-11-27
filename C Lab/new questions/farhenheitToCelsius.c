#include<stdio.h>

int main(){

  int far;
  printf("Enter value of in farhenheit: ");
  scanf("%d",&far);

  int cel;
  cel=(far-32)*5/9;

  printf("far %d in Celsius is: %d",far,cel);

  return 0;
}