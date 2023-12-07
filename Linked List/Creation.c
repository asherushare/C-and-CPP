#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

void Traversal(struct Node *ptr){
  while (ptr!=NULL){
    printf("Element : %d\n",ptr->data);
    ptr = ptr->next;
  }
};

int main(){
  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *forth;

  // Allocated memory for nodes in linked list in Heap
  head = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));
  forth = (struct Node*)malloc(sizeof(struct Node));

  // Link first and second nodes
  head->data=7;
  head->next = second;

  // Link second and third nodes
  second->data=11;
  second->next = third;

  // Link second and third nodes
  third->data=24;
  third->next = forth;

  // Terminate the list at the third node
  forth->data=66;
  forth->next = NULL;

  Traversal(head);

  return 0;
}