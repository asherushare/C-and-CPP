#include<stdio.h>

int main(){
  int bp,da,hra,gp;
  printf("Enter the amount of basic pay(bp): ");
  scanf("%d",&bp);

  da=40*(bp/100);
  hra=20*(bp/100);

  gp=da+hra+bp;
  printf("Calculated GP(Gross Pay)=%d",gp);
  return 0;
}