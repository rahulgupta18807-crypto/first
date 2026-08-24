#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a,b,c;
    float d,x1,x2;

    cout<<"Enter a, b and c: ";
    cin>>a>>b>>c;

    d=b*b-4*a*c;

    if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);

        cout<<"Roots are: "<<x1<<" and "<<x2;
    }
    else if(d==0)
    {
        x1=-b/(2*a);

        cout<<"Both roots are: "<<x1;
    }
    else
    {
        cout<<"Roots are imaginary";
    }

    return 0;
}