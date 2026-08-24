#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* createNode(int value)
{
    Node* newNode=new Node();
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}

void radixSort(int arr[],int n)
{
    Node* bucket[10]={NULL};
    Node* last[10]={NULL};

    int max=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }

    for(int pos=1;max/pos>0;pos=pos*10)
    {
        for(int i=0;i<10;i++)
        {
            bucket[i]=NULL;
            last[i]=NULL;
        }

        for(int i=0;i<n;i++)
        {
            int digit=(arr[i]/pos)%10;
            Node* newNode=createNode(arr[i]);

            if(bucket[digit]==NULL)
            {
                bucket[digit]=newNode;
                last[digit]=newNode;
            }
            else
            {
                last[digit]->next=newNode;
                last[digit]=newNode;
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

                Node* deleteNode=temp;
                temp=temp->next;
                delete deleteNode;
            }
        }
    }
}

int main()
{
    int arr[]={170,45,75,90,802,24,2,66};
    int n=8;

    cout<<"Before sorting: ";

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    radixSort(arr,n);

    cout<<"\nAfter sorting: ";

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}