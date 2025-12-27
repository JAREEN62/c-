#include<iostream>
using namespace std;
/* int main()
{
    int n,i,r,rev=0;
    cout<<"Enetr number: ";
    cin>>n;
    int m=n;

    while(n>0)
    {
        r = n%10;
        n = n/10;
        rev=rev*10+r;
    }
    cout<<"reverse of the given number is: "<<rev<<endl;
    return 0;
}
 */
int getrev(int n)
{
    int rev = 0,r;
     while(n>0)
    {
        r = n%10;
        n = n/10;
        rev=rev*10+r;
    }
    cout<<"reverse of the given number is: "<<rev<<endl;
    return 0;
}

int main()
{
    int n,i,r,rev=0;
    cout<<"Enetr number: ";
    cin>>n;
    int m=n;
    cout<<getrev(n)<<endl;
}
 
 