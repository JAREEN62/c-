#include<iostream>
using namespace std;
int main()
{
    int n,i,sum = 0;
    cout<<"Enter the num: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum = sum+i;
        }    
    }
    if(2*n==sum)
    {
        cout<<n<<" is a Perfect number."<<endl;
    }
    else
    {
        cout<<n<<" is not a perfect number."<<endl;
    }
    return 0;
} 