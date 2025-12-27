#include<iostream>
#include <cmath>
using namespace std;
int main( )
{
    float a, b, c, d, r1, r2;
    d = b*b-4*a*c;
    cout<<"Enter values a, b and c: ";
    cin>>a>>b>>c;
    if(d==0)
    {
        r1 = -b/2*a;
        cout<<"real and equal "<<r1;
    }
    else if(d>0)
    {
        r1 = (-b+sqrt(d))/(2*a);
        r1 = (-b-sqrt(d))/(2*a);
        cout<<"unreal and unequal"<<r1<< " "<<r2;
    }
    else
    {
        cout<<"imaginary"; 
    }
}