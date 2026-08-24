#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

// Insert element
void enqueue(int value) {
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = rear;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    cout << value << " inserted" << endl;
}

// Delete element
void dequeue() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }

    Node* temp = front;

    cout << front->data << " deleted" << endl;

    front = front->next;

    if (front == NULL) {
        rear = NULL;
    } else {
        front->prev = NULL;
    }

    delete temp;
}

// Display queue
void display() {
    Node* temp = front;

    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Queue: ";

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    return 0;
}