#include<iostream>
using namespace std;
int main()
{
    int t;
    cout << " Enter time: "<<endl;
    cin >> t;
    if(t>=9 && t<=6 )
    {
        cout<<"Working hour!"<<endl;
    }
    else
    {
        cout<<"leasure hour"<<endl;
    }
    return 0;

}