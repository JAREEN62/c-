#include<iostream>
using namespace std;
int main()
{
    int n,r,m,sum=0;
    cout<<"Enter n: ";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+(r*r*r);
    }
    if(sum==m)
    {
        cout<<"Amstrong number!"<<endl;
    }
    else
    {
        cout<<"Not an Amstrong Number!"<<endl;
    }
    return 0;
}