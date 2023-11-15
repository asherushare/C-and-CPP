#include<stdio.h>
int main(){
  int feet;
  printf("Enter feet value: ");
  scanf("%d",&feet);

  int centimeter=feet*30.48;

  printf("%d feet = %d centimeter\n",feet,centimeter);
  return 0;
}