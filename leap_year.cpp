#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<< "Enter a year :";
    cin>>year;

    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                cout<<"Leap Year"<<endl;
            }
            else 
            {
                cout<<"not a leap year"<<endl;
            }  
        } 
        else
        {
            cout<<"leap year"<<endl;
        }
    }
    else
    {
        cout<<"Not a leap year";
    }
    return 0;
}