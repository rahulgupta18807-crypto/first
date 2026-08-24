#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float u,angle;
    float g=9.8;
    float time,height,range;

    cout<<"Enter initial velocity: ";
    cin>>u;

    cout<<"Enter angle: ";
    cin>>angle;

    // Convert angle into radians
    float rad=angle*3.14159/180;

    // Time of flight
    time=(2*u*sin(rad))/g;

    // Maximum height
    height=(u*u*sin(rad)*sin(rad))/(2*g);

    // Range
    range=(u*u*sin(2*rad))/g;

    cout<<"Time of flight = "<<time<<" seconds"<<endl;
    cout<<"Maximum height = "<<height<<" meters"<<endl;
    cout<<"Range = "<<range<<" meters"<<endl;

    return 0;
}