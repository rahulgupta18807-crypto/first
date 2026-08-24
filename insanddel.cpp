#include<iostream>
using namespace std;

int main()
{
    int arr[100]={10,20,30,40,50};
    int n=5;
    int pos,value;

    // Insertion
    cout<<"Enter position for insertion: ";
    cin>>pos;

    cout<<"Enter value: ";
    cin>>value;

    for(int i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }

    arr[pos]=value;
    n++;

    cout<<"Array after insertion: ";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    // Deletion
    cout<<"\nEnter position for deletion: ";
    cin>>pos;

    for(int i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }

    n--;

    cout<<"Array after deletion: ";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}