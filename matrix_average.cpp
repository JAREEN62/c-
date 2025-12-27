#include<iostream>
using namespace std;
int main()
{
    int n,i;
    float A[100],sum= 0.0,average;
    cout<<"Enter the number of elements: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number : ";
        cin>>A[i];
        sum += A[i];
    }

    average = sum/n; 
    cout<<"average : "<<average<<endl;
    return 0;
}