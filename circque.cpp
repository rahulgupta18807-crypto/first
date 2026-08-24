#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

// Insert element
void enqueue()
{
    struct node *newnode;
    int value;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter value: ");
    scanf("%d", &value);

    newnode->data = value;

    if (front == NULL)
    {
        front = newnode;
        rear = newnode;
        newnode->next = front;
    }
    else
    {
        newnode->next = front;
        rear->next = newnode;
        rear = newnode;
    }

    printf("Element inserted.\n");
}

// Delete element
void dequeue()
{
    struct node *temp;

    if (front == NULL)
    {
        printf("Queue is empty.\n");
    }
    else if (front == rear)
    {
        printf("Deleted element = %d\n", front->data);

        free(front);

        front = NULL;
        rear = NULL;
    }
    else
    {
        temp = front;

        printf("Deleted element = %d\n", front->data);

        front = front->next;
        rear->next = front;

        free(temp);
    }
}

// Display queue
void display()
{
    struct node *temp;

    if (front == NULL)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        temp = front;

        printf("Queue elements are: ");

        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        while (temp != front);

        printf("\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            enqueue();
        }
        else if (choice == 2)
        {
            dequeue();
        }
        else if (choice == 3)
        {
            display();
        }
        else if (choice == 4)
        {
            exit(0);
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}