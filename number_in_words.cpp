#include <iostream>
using namespace std;

int main()
{
    int n, r, rev = 0;

    cout << "Enter n: ";
    cin >> n;

    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    while (rev != 0)
    {
        r = rev % 10;
        rev = rev / 10;
        switch (r)
        {
        case 0:
            cout << "zero" << endl;
            break;
        case 1:
            cout << "one" << endl;
            break;
        case 2:
            cout << "Two" << endl;
            break;
        case 3:
            cout << "three" << endl;
            break;
        case 4:
            cout << "four" << endl;
            break;
        case 5:
            cout << "five" << endl;
            break;
        case 6:
            cout << "six" << endl;
            break;
        case 7:
            cout << "seven" << endl;
            break;
        case 8:
            cout << "eight" << endl;
            break;
        case 9:
            cout << "nine" << endl;
            break;
        default:
            cout << "invalid" << endl;
            break;
        }
    }
    cout << endl;
    return 0;
}