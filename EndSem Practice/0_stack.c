#include<stdio.h>
#include<stdlib.h>

struct stack{
  int size;
  int top;
  int *arr;
};

int isFull(struct stack *ptr){
  if(ptr->top==ptr->size-1){
    return 1;
  }
  else{
    return 0;
  }
};

int isEmpty(struct stack *ptr){
  if(ptr->top==-1){
    return 1;
  }
  else{
    return 0;
  }
};

void push(struct stack *ptr, int val){
  if(isFull(ptr)){
    printf("Overflow.");
  }
  else{
    ptr->top++;
    ptr->arr[ptr->top]=val;
  }
};

int pop(struct stack *ptr){
  if(isEmpty(ptr)){
    printf("Underflow.");
    return -1;
  }
  else{
    int val=ptr->arr[ptr->top];
    ptr->top--;
    return val;
  }
};

int main(){

  struct stack *s;
  s=(struct stack*)malloc(sizeof(struct stack));
  s->size=23;
  s->top=-1;
  s->arr=(int*)malloc(s->size* sizeof(struct stack));

  push(s,23);
  pop(s);
  push(s,90);
  push(s,23);
  pop(s);
  push(s,90);

  printf("Stack elements: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->arr[i]);
    }

  free(s);
  free(s->arr);

  return 0;
}