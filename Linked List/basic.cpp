#include<iostream>
using namespace std;

// class Node{
//   public:
//   int data;
//   Node* next;
// };

class node{
  public:
  int data;
  node* next;

  node(int val){
    data=val;
    next=NULL;
  }
};

void insertAtTail(node* &head, int val){
  node* n=new node(val);

  if(head==NULL){
    head=n;
    return;
  }

  node* temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=n;
}

void display(node* head){
  node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}

int main(){

  // Node* node1=new Node();
  // cout<<node1-> data<<endl;
  // cout<<node1-> data<<endl;

  node* head=NULL;
  insertAtTail(head,1);
  insertAtTail(head,2);
  insertAtTail(head,3);
  display(head);



  return 0;
}