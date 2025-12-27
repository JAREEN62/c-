#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the no of rows: ";
    cin>>r;
    cout<<"Enter the number of columns to display: ";
    cin>>c;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(i>=j)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}