#include <stdio.h>
#include <string.h>

// Define the maximum length of the word
#define MAX_LENGTH 100

// Structure to represent a stack
struct Stack {
    int top;
    char items[MAX_LENGTH];
};

// Function to initialize the stack
void initialize(struct Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to push an item onto the stack
void push(struct Stack *stack, char item) {
    if (stack->top == MAX_LENGTH - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack->items[++stack->top] = item;
}

// Function to pop an item from the stack
char pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return '\0';
    }
    return stack->items[stack->top--];
}

// Function to reverse a word using a stack
void reverseWord(char word[]) {
    struct Stack stack;
    initialize(&stack);

    // Push each character of the word onto the stack
    for (int i = 0; i < strlen(word); i++) {
        push(&stack, word[i]);
    }

    // Pop each character from the stack to reverse the word
    for (int i = 0; i < strlen(word); i++) {
        word[i] = pop(&stack);
    }
}

int main() {
    char word[MAX_LENGTH];

    // Input the word
    printf("Enter a word: ");
    scanf("%s", word);

    // Reverse the word using the stack
    reverseWord(word);

    // Output the reversed word
    printf("Reversed word: %s\n", word);

    return 0;
}
