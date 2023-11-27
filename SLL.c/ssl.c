#include<stdio.h>
#include<stdlib.h>

struct node {
  int item;
  struct node *next;
};

void insertAtlast(struct node **s, int data) {
  struct node *n, *t;
  n = malloc(sizeof(struct node));
  n->item = data;
  n->next = NULL;
  if (*s == NULL) {
    *s = n;
  } else {
    t = *s;
    while (t->next != NULL) {
      t = t->next;
    }
    t->next = n;
  }
}

void deleteFirst(struct node **s) {
  struct node *t;
  if (*s != NULL) {
    t = *s;
    *s = t->next;
    free(t);
  }
}

void viewList(struct node *start) {
  while (start) {
    printf("%d ", start->item);
    start = start->next;
  }
}

int main() {
  struct node *start = NULL;
  insertAtlast(&start, 25);
  insertAtlast(&start, 285);
  insertAtlast(&start, 325);
  insertAtlast(&start, 235);
  printf("\n");

  viewList(start);
  deleteFirst(&start);
  printf("\n");
  viewList(start);
  printf("\n");

  return 0;
}
