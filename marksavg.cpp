#include<iostream>
using namespace std;
int main()
{
    int m1, m2, m3, total;
    float avg;
    cout<<"Enter the marks of the 3 subjects : ";
    cin>>m1>>m2>>m3;
    total = m1 + m2 + m3;
    avg=total/3.0;
    cout<<"total = "<<total<<endl;
    cout<<"average = "<<avg<<endl;
    if(avg>=60)
    {
        cout<<"Grade A";
    }
    else if(avg<60 && avg>35)
    {
        cout<<"Grade B";
    }
    else
    {
        cout<<"Grade C";
    }
    return 0;
}