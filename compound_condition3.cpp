#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age: ";
    cin>>age;
    if(age<12 || age>30)
    {
        cout<<"Welcome!";
    }
    else
    {
        cout<<"Sorry!";
    }
    return 0;

}