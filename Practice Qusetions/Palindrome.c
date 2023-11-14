#include<stdio.h>
int main(){
  int n,rem,num=0,c;
  printf("Enter a number: ");
  scanf("%d",&n);

  c=n;
  while(n>0){
    rem=n%10;
    num=rem+(num*10);
    n=n/10;
  }

  if(c==num){
    printf("This is palindrome.");
  }
  else{
    printf("This is not a palindrome number.");
  }
  return 0;
}