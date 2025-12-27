#include<iostream>
using namespace std;

int main()
{
    float NetSalary,BasicSalary,PercentageOfAllowances,PercentageOfDeductions;
    cout<<"Enter BasicSalary, PercentageOfAllowances and PercentageOfDeductions : "<<endl;
    cin>>BasicSalary>>PercentageOfAllowances>>PercentageOfDeductions;
    NetSalary = BasicSalary + (BasicSalary*PercentageOfAllowances)/100 - (BasicSalary*PercentageOfDeductions)/100;
    cout<< "NetSalary: "<<NetSalary<<endl;

    return 0;

}