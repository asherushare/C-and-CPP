#include<stdio.h>
#include<stdlib.h>

struct Stack{
  int size;
  int top;
  int *arr;
};

int isEmpty(struct Stack *ptr){
  if(ptr->top == -1){
    return 1;
  }
  else{
    return 0;
  }
};

int isFull(struct Stack *ptr){
  if(ptr->top == ptr->size-1){
    return 1;
  }
  else{
    return 0;
  }
};

int main(){
  // struct Stack stack;
  // stack.size=80;
  // stack.top=-1;
  // stack.arr=(int *)malloc(stack.size * sizeof(int));

  struct Stack *s;
  s->size=3;
  s->top=-1;
  s->arr = (int *)malloc(s->size * sizeof(int));
  // struct Stack *s= (struct Stack*)malloc(sizeof(struct Stack));

  // Pusing element manually

  // s->arr[0]=4;
  // s->top++;

  if(isEmpty(s)){
    printf("The stack is empty.");
  }
  else{
    printf("The stack is not empty.");
  }

  return 0;
}