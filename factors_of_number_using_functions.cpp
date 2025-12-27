#include<iostream>
using namespace std;

int getfact(int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
    }
    return n;
}
int main()
{
    int f;
    cout<<"Enter value: ";
    cin>>f;
    cout<<getfact(f)<<endl;;
    return 0;
}