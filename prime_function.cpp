#include <iostream>
using namespace std;
int getprime(int n)
{
    int count = 0, i;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Prime number ";
    }
    else
    {
        cout << "Not a prime ";
    }
    return n;
}

int main()
{
    int n, i, count = 0;
    cout << "n: ";
    cin >> n;
    cout << getprime(n) << endl;
}