#include<iostream>
using namespace std;
int main()
{
    int x=3;
    // cout<<"x : ";
    // cin>>x;
    switch(x)
    {
        case 1: cout<<"one";
            break;
        case 2: cout<<"two";
            break;
        case 3: cout<<"three";
            break;
        default : cout<<"Invalid number";
    }
}