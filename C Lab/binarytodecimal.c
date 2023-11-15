#include<stdio.h>
int main(){
  int binary;
  printf("Enter binary number: ");
  scanf("%d",&binary);

  int decimal=0, i=0, rem;
  while(binary!=0){
    rem=binary%10;
    decimal=decimal+rem*pow(2,i);
    binary=binary/10;
    i++;
  }
  printf("The decimal value is: %d\n",decimal);
  return 0;
}