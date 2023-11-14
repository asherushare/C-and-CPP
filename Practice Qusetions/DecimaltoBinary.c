#include<stdio.h>
int main(){
  int n;
  printf("Enter the decimal number here: ");
  scanf("%d",&n);

  int arr[1000];
  int i=0;
  while(n>0){
    arr[i]=n%2;
    n=n/2;
    i++;
  }

  printf("Binary number of given decimal number is: ");
  for(int j=1;j<=i;j++){
    printf("%d",arr[i-j]);
  }
}