#include<iostream>
using namespace std;

int getfactorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<getfactorial(n)<<endl;
    return 0;
}
