#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age: ";
    cin>>age;
    if(age>=12 && age<=29)
    {
        cout<<"YOUNG!";
    }
    else
    {
        cout<<"OLD!";
    }
    return 0;

}