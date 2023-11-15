#include<stdio.h>
int main(){
  int side1, side2;

  printf("Enter side1 and side2 value: ");
  scanf("%d%d",&side1,&side2);

  int area = (side1 * side2) / 2;
  printf("The area of the triangle is: %d", area);
  
  return 0;
}