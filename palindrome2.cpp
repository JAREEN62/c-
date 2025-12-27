#include<iostream>
using namespace std;
int main()
{

    int m,n,r,rev=0;
    
    cout<<"Enter the number: ";
    cin>>n;
    m = n;
    

    while(n!=0)
    {
        r = n%10;
        n = n/10;
        rev = rev*10+r;   
    }
    cout<<"Reverse of the number is: "<<rev<<endl;

    if(m == rev)
    {
        cout<<"palindriome!"<<endl;
    }
    else 
    {
        cout<<"not a palindrome!"<<endl;
    }
return 0;
}