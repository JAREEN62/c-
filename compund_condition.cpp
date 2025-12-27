#include<iostream>
using namespace std;
int main()
{
    int t;
    cout << " Enter time: ";
    cin >> t;
    if(t>=9 && t<=18 )
    {
        cout<<"Working hour!"<<endl;
    }
    else
    {
        cout<<"leasure hour!"<<endl;
    }
    return 0;

}