#include<iostream>
using namespace std;

int getperfect(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
        sum+=i;
        }
    }
    if(2*n==sum)
    {
        cout<<"Perfect number: ";
    }
    else
    {
        cout<<"not a perfect number: ";
    }
    return n;
}

int main()
{
    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<getperfect(n)<<endl;
    return 0;
}