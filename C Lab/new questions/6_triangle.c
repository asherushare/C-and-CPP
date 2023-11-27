#include<stdio.h>
int main(){

  int side1;
  int side2;
  int side3;

  printf("Enter value for side1: ");
  scanf("%d",&side1);

  printf("Enter value for side2: ");
  scanf("%d",&side2);

  printf("Enter value for side2: ");
  scanf("%d",&side3);

  if(side1>=side2+side3){
    printf("This is not a triange.");
  }
  else if(side1*side1==(side2*side2+side3*side3)){
    printf("This is right angle triange.");
  }
  else{
    printf("Did not match any condition.");
  }

  return 0;
}