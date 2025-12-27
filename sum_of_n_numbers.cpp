#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter N: ";
    cin>>n;
    do
    {
        sum+=i;
        i++;
    }
    while(n>=i);
    cout<<"sum is : "<<sum<<endl;
    return 0;
}

 
