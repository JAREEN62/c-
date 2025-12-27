#include<iostream>
using namespace std;
int main()
{
    int r,n,rev = 0;
    
    cout<<"Enter a number: ";
    cin>>n;
    int m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev = rev*10+r;
    }
    if(rev==m)
    {
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
return 0;
}