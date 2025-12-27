#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter 2 numbers :";
    cin >> n >> m;
    while (n != m)
    {
        if (n > m)
        {
            n = n - m;
        }
        else if (m > n)
        {
            m = m - n;
        }
        /* cout << n << "," << m << endl; */
    }
    cout << n << "," << m << endl;
    return 0;
}