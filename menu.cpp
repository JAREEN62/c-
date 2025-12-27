#include <iostream>
using namespace std;

int getmenu(int option,int a, int b)
{
    int c;
    switch (option)
    {
    case 1:
        c = a + b;
        break;

    case 2:
        c = a - b;
        break;

    case 3:
        c = a * b;
        break;

    case 4:
        c = a / b;
        break;
    }
    return c;
}

int main()
{
    cout << "MENU\n";
    cout << "1. ADD\n"
         << "2. SUB\n"
         << "3. MUL\n"
         << "4. DIV\n";
    int option;
    cout << "Enter your option: ";
    cin >> option;
    cout << "Enter 2 values: ";
    int a, b;
    cin >> a >>b;
    cout << "Result : " << getmenu(option,a,b) << endl;
    
    return 0;
}
