#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};

struct node *current=NULL;
struct node *head=NULL;

void print()
{
  while(head!=NULL)
  {
    printf("%d ",head->data);
    head=head->next;
  }
}

void create(int val)
{
    struct node * temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    // if there is no node exits in list 
    if(head==NULL)
    { 
      head=temp;
      current=head;
    }
    else
    {
        (current)->next=temp;
        current=(current)->next;
    }
}

int main(){

  
  

  create(10);
  create(20);
  create(30);
  create(40);
  create(50);
  create(60);
  create(70);
  

  print();
  return 0;
}