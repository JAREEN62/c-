#include<iostream>
using namespace std;
int main()
{
    int r,c,count = 1;
    cout<<"Enter the no of rows: ";
    cin>>r;
    cout<<"Enter the number of columns: ";
    cin>>c;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}