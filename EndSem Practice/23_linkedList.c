#include<stdio.h>
#include<stdlib.h>

struct node {
  int data;
  struct node *next;  // Corrected the type of 'next'
};

void Traversal(struct node *ptr) {
  while(ptr != NULL) {
    printf("%d ", ptr->data);  // Added a space and corrected the print statement
    ptr = ptr->next;  // Added the update for the next pointer
  }
}

int main() {
  struct node *head;
  struct node *second;
  struct node *third;

  head = (struct node*)malloc(sizeof(struct node));
  second = (struct node*)malloc(sizeof(struct node));
  third = (struct node*)malloc(sizeof(struct node));

  head->data = 23;
  head->next = second;

  second->data = 289;
  second->next = third;

  third->data = 42;  // Corrected the data value
  third->next = NULL;

  // Printing the elements
  Traversal(head);

  // Freeing allocated memory
  free(head);
  free(second);
  free(third);

  return 0;
}
