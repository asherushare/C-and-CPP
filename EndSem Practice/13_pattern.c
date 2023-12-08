#include<stdio.h>

int main(){

  int row;

  printf("Enter no of rows here: ");
  scanf("%d",&row);

  for(int i=1;i<=3;i++){
    for(int j=1;j<=7;j++){
      if(j>=i && j<=8-1){
        printf("*");
      }
      else{
        printf(" ");
      }
    }
  }

  return 0;
}