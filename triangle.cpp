#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a num: ";
    cin>>n;
        for(int i = 1 ; i <=n; i++)
        {
            for(int j=0;j<=n;j++)
            {
                 if(i+j>n+1-1)
                 {
                    cout<<"*";
                 }
                cout<<" ";
            
            }
            cout<<endl; 
        }
        return 0;
}
