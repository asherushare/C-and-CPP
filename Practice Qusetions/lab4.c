#include<stdio.h>

int main(){
  int size;
  printf("Enter the size of array: ");
  scanf("%d",&size);

  int arr[100];
  printf("Enter %d elements here: ",size);
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }

  printf("Array elements are: ");
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }

  int Nodd=0;
  int Neven=0;

  for(int i=0;i<size;i++){
    if(arr[i]%2==0){
      Neven++;
    }
    else{
      Nodd++;
    }
  }

  printf("\nNodd= %d\nand Neven = %d",Nodd,Neven);

  return 0;
}