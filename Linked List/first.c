//Insertion in Linkedlist

#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};

void linkedListTraversal(struct node *ptr){
  while(ptr !=NULL){
    printf("Element: %d\n",ptr->data);
    ptr=ptr->next;
  }
};

struct node * insertAtfirst(struct node *head, int data){
  struct node *ptr=(struct node *)malloc(sizeof(struct node));
  ptr->next=head;
  ptr->data=data;
  return ptr;
};

int main(){
  struct node *head;
  struct node *second;
  struct node *third;
  struct node *forth;
  head=(struct node*)malloc(sizeof(struct node));
  second=(struct node*)malloc(sizeof(struct node));
  third=(struct node*)malloc(sizeof(struct node));
  forth=(struct node*)malloc(sizeof(struct node));

  head->data=5;
  head->next=second;
  second->data=23;
  second->next=third;
  third->data=323;
  third->next=forth;
  forth->data=34;
  forth->next=NULL;

  linkedListTraversal(head);
  printf("\n");
  head=insertAtfirst(head,333);
  linkedListTraversal(head);

  return 0;
}