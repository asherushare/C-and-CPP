#include<stdio.h>
int main(){

  int size;
  printf("Enter the size of array: ");
  scanf("%d",&size);

  int arr[100];
  int temp=arr[0];
  int c;

  printf("Enter %d elements here: ",size);
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }

  printf("Array elements are: ");
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }

  printf("\nUnique elements are: ");
  for(int i=0;i<size-1;i++){
    c=0;
    for(int j=i+1;j<size;j++){
      if(arr[i]==arr[j]){
        c++;
      }
    }
  }

  if(c==0){
    for(int i=0;i<size;i++){
      printf("%d ",arr[i]);
    }
  }
  return 0;
}