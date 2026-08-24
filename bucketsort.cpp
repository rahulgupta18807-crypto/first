#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void bucketSort(int arr[],int n)
{
    Node* bucket[10]={NULL};

    for(int i=0;i<n;i++)
    {
        int index=arr[i]/10;

        Node* newNode=new Node();
        newNode->data=arr[i];
        newNode->next=NULL;

        if(bucket[index]==NULL)
        {
            bucket[index]=newNode;
        }
        else
        {
            Node* temp=bucket[index];

            while(temp->next!=NULL)
                temp=temp->next;

            temp->next=newNode;
        }
    }

    int k=0;

    for(int i=0;i<10;i++)
    {
        Node* temp=bucket[i];

        while(temp!=NULL)
        {
            arr[k]=temp->data;
            k++;

            Node* del=temp;
            temp=temp->next;
            delete del;
        }
    }
}

int main()
{
    int arr[]={29,15,42,8,35,61,73,24};
    int n=8;

    cout<<"Before sorting: ";

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    bucketSort(arr,n);

    cout<<"\nAfter sorting: ";

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}