#include<iostream>
using namespace std;

void tower(int n,char source,char helper,char destination)
{
    if(n==1)
    {
        cout<<"Move disk 1 from "<<source<<" to "<<destination<<endl;
        return;
    }

    tower(n-1,source,destination,helper);

    cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;

    tower(n-1,helper,source,destination);
}

int main()
{
    int n;

    cout<<"Enter number of disks: ";
    cin>>n;

    tower(n,'A','B','C');

    return 0;
}