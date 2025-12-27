#include <iostream>
using namespace std;
int getdigit(int n)
{
    int r;
    while(n > 0)/* 12 */
    {
        r = n % 10;/* 2 */  /* 1 */
        n = n / 10;/* 1 */  /* 0 */
        cout << r << endl;/* 2 */
    }
    return n;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << getdigit(n)<< endl;
    return 0;
}

/* int main()
{
    int n,r;
    cout << "Enter n: ";
    cin >> n;
    
    while(n > 0)
    {
        r = n % 10;
        n = n / 10;
        cout << r << endl;
    }
    return 0;
} */