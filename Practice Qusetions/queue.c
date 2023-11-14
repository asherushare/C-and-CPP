#include <stdio.h>
#define MAX_SIZE 10

struct Queue {
    int front, rear, items[MAX_SIZE];
};

void initQueue(struct Queue *q) {
    q->front = q->rear = -1;
}

int isEmpty(struct Queue *q) {
    return q->front == -1 && q->rear == -1;
}

int isFull(struct Queue *q) {
    return q->rear == MAX_SIZE - 1;
}

void enqueue(struct Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue Overflow\n");
        return;
    }
    isEmpty(q) ? (q->front = 0) : (q->rear++);
    q->items[q->rear] = value;
    printf("Element %d inserted into the queue\n", value);
}

void dequeue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue Underflow\n");
        return;
    }
    printf("Element %d deleted from the queue\n", q->items[q->front++]);
    if (q->front > q->rear) initQueue(q);
}

void displayQueue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    for (int i = q->front; i <= q->rear; printf("%d ", q->items[i++]));
    printf("\n");
}

int main() {
    struct Queue q;
    initQueue(&q);

    char choice;
    int value;

    do {
        printf("Menu:\n a. Insert element to queue\n b. Delete an element from the queue\n c. Display all elements of the queue\n d. Quit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                printf("Enter element to insert: ");
                scanf("%d", &value);
                enqueue(&q, value);
                break;
            case 'b':
                dequeue(&q);
                break;
            case 'c':
                displayQueue(&q);
                break;
            case 'd':
                printf("Quitting the program\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 'd');

    return 0;
}
