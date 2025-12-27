#include<iostream>
using namespace std;
int main()
{
    int sum=0,n,r;
    cout << "Enter n: ";
    cin >> n;
    
    while(n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum+r;
       /*  cout <<sum<<endl; */
    }
    cout << sum << endl;
    return 0;
}