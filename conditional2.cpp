#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a and b values: ";
    cin >> a >> b ;
    
    if(b==0)
    {
        cout << "Division By Zero!" << endl;
    }
    else
    {
        c = a/b;
        cout << c << endl;
    }
    return 0;
}
