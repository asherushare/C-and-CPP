#include<stdio.h>
#include<stdlib.h>

struct stack{
  int size;
  int top;
  int *arr;
};

int isFull(struct stack* ptr){
  if(ptr->top==ptr->size-1){
    return 1;
  }
  else{
    return 0;
  }
};

int isEmpty(struct stack* ptr){
  if(ptr->top==-1){
    return 1;
  }
  else{
    return 0;
  }
};

void push(struct stack *ptr, int val){
  if(isFull(ptr)){
    printf("Stack Overflow\n");
  }
  else{
    ptr->top++;
    ptr->arr[ptr->top]=val;
  }
};

int pop(struct stack *ptr){
  if(isEmpty(ptr)){
    printf("Stack Underflow\n");
  }
  else{
    int val=ptr->arr[ptr->top];
    ptr->top--;
    return val;
  }
};

int main(){
  struct stack *s = (struct stack*)malloc(sizeof(struct stack));
  s->size = 90;
  s->top = -1;
  s->arr = (int*)malloc(s->size * sizeof(int));

  // printf("Stack has been created susscessfully.\n");
  // printf("%d\n",isFull(s));
  // printf("%d\n",isEmpty(s));

  push(s,5);
  push(s,10);
  pop(s);
  push(s,15);
  push(s,20);
  pop(s);
  push(s,25);
  pop(s);
  pop(s);
  push(s,30);

  printf("Stack elements: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->arr[i]);
    }

  return 0;
}