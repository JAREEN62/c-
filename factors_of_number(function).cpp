#include<iostream>
using namespace std;

int getfact(int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        if(i%2==0)
        {
            cout<<i\n;
        }
    }
    return n;
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<getfact(n);
    return 0;
}