#include <iostream>
using namespace std;

// using functions 
/* int getGCD(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;   
        else if(b > a)
            b = b - a;
    }
        return a, b;
}

int main()
{
    int m, n;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;
    cout<<"GCD of "<<m<<" and "<<n<<" is : "<<getGCD(m,n);
    cout<<endl;
    return 0;
} */


int main()
{
    int m, n;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;
     while (m != n)
    {
        if (m > n)
            m = m - n;   
        else if(n > m)
            n = n - m;
    }
    cout<<"GCD is: "<<n;
    cout<<endl;
    return 0;
}