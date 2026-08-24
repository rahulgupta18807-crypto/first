#include<iostream>
using namespace std;

int main()
{
    int arr[10]={5,3,8,1,9,2,7,4,6,0};
    int n=10;
    int bin[10]={0};

    // Put elements into bins
    for(int i=0;i<n;i++)
    {
        bin[arr[i]]++;
    }

    // Put elements back in sorted order
    int k=0;

    for(int i=0;i<10;i++)
    {
        while(bin[i]>0)
        {
            arr[k]=i;
            k++;
            bin[i]--;
        }
    }

    cout<<"Sorted array: ";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}