#include<iostream>
using namespace std;
int main()
{
    int n,sum = 0,r;
    cout<<"enter number: ";
    cin>>n;
    int m=n;
    while(n>0)
    {
        r = n%10;
        n = n/10;
        sum += r*r*r;
    }
    if(m==sum)
    {
        cout<<"Amstrong\n";
    }
    else
    {
        cout<<"Not amstrong\n";
    }
    return 0;
}

/* #include <iostream>
using namespace std;
int getamstrong(int n)
{
    int sum = 0, r, m;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum += r * r * r;
    }
    if (sum == m)
    {
        cout << "Amstrong\n";
    }
    else
    {
        cout << "Not amstrong\n";
    }
    return n;
}

int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    int m = n;
    cout << getamstrong(n) << endl;
    return 0;
} */