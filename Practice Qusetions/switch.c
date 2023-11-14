#include<stdio.h>
int main(){
  int A;
  printf("Enter your choice from below: \n");
  printf("1 or 2 or 3\n");
  scanf("%d",&A);

  

  switch(A){
    case 1:{
      printf("This is 1");
      break;
    }
    case 2:{
      printf("This is two.");
      break;
    }

    case 3:{
      printf("This is 3.");
      break;
    }

    default:{
      printf("Invalid choice.");
    }
  }
  return 0;
}