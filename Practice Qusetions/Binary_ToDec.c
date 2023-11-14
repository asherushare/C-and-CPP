#include<stdio.h>
int main(){
  int n;
  printf("Enter a birany number: ");
  scanf("%d",&n);

  int rem, bin=0, base=1;
  while(n>0){
    rem=n%10;
    bin=bin*rem+base;
    n=n/10;
    base=base*2;
  }
  
  printf("Decimal number is: %d",bin);
  return 0;
}