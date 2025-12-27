#include<iostream>
using namespace std;
int main()
{
    int n,m,p,q;
   
    cout<<"Enter the size of num1: ";
    cin>>n;
    cout<<"Enter the size of num2: ";
    cin>>m;
    
    int num1[n], num2[m];
    
    cout<<"Enter the integers of array1: ";
    for(int i = 0;i<n;i++)
    {
        cin>>num1[i];
    }
    for(int i = 0;i<n;i++)
    {
        cout<<num1[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter the integers of array2: ";
    for(int i = 0;i<m;i++)
    {
        cin>>num2[i];
    }
    for(int i = 0;i<m;i++)
    {
        cout<<num2[i]<<" ";
    }
    cout<<endl;

    return 0;

}
