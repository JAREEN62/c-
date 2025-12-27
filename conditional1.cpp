#include <iostream>
using namespace std;
int main()
{
    int roll;
    cout << "Enter your rollno: ";
    cin >> roll;
    if(roll<1)
    {
        cout<<"Invalid roll number!";
    }
    else
    {
        cout<<"valid roll number!";
    }


    return 0;
} 