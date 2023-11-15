#include<stdio.h>
int main(){
  int S1,S2,S3,S4;
  
  printf("Enter marks of 4 subjects: ");
  scanf("%d%d%d%d",&S1,&S2,&S3,&S4);

  int total=S1+S2+S3+S4;
  int average=total/4;

  if(average>=50){
    printf("Pass\n");
  }else{
    printf("Fail\n");
  }
  return 0;
}