#include<stdio.h>
int main(){
  int n;
  printf("Enter a decimal number: ");
  scanf("%d",&n);

  int arr[100];

  int i=0;
  while(n>0){
    arr[i]=n%2;
    n=n/2;
    i++;
  }

  printf("Binary number is: ");
  // for(int j=i-1;j>=0;j--){
  //   printf("%d",arr[j]);
  // }

  for(int j=1;j<=i;j++){
    printf("%d",arr[i-j]);
  }

}