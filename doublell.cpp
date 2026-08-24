#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

int main()
{
    Node* first=new Node();
    Node* second=new Node();
    Node* third=new Node();

    first->data=10;
    first->prev=NULL;
    first->next=second;

    second->data=20;
    second->prev=first;
    second->next=third;

    third->data=30;
    third->prev=second;
    third->next=NULL;

    Node* temp=first;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}