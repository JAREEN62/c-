#include<iostream>
using namespace std;
int main()

{
    char s[20];
    char s2[30];
    cout<< "name: ";
    cin.getline(s,50);
    cout<<"welcome "<<s<<endl;
    /* cin.ignore(); */ //use when using cin.get()
 
    cout<< "name: ";
    cin.getline(s2,50);
    cout<<"welcome "<<s2<<endl;
    /* cin.ignore(); */ //use when using cin.get()
    return 0;
};

