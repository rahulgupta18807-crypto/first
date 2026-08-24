#include <stdio.h>
#include <stdlib.h>

// Node of doubly linked list
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *top = NULL;

// Push element into stack
void push(int value) {
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = top;

    if (top != NULL) {
        top->prev = newNode;
    }

    top = newNode;

    printf("%d pushed into stack\n", value);
}

// Pop element from stack
void pop() {
    struct Node *temp;

    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }

    temp = top;

    printf("%d popped from stack\n", top->data);

    top = top->next;

    if (top != NULL) {
        top->prev = NULL;
    }

    free(temp);
}

// Display stack
void display() {
    struct Node *temp = top;

    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements are:\n");

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    pop();
    pop();

    display();

    return 0;
}