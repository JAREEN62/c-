#include<iostream>
using namespace std;
int main()
{
    cout<<"MENU\n";
    cout<<"1. ADD\n"<<"2. SUB\n"<<"3. MUL\n"<<"4. DIV\n";
    int option;
    cout<<"Enter your option: ";
    cin>>option;
    int a, b,c;
    cout<<"Enter 2 values: ";
    cin>>a>>b;
    switch(option)
    {
        case 1: c=a+b;
            // cout<<c;
            break;
    
        case 2: c=a-b;
            // cout<<c;
            break;

        case 3: c=a*b;
            // cout<<c;
            break;
        
        case 4: c=a/b;
            // cout<<c;
            break;
        // default :
        //     cout<<"invalid";
        //     break;
        
            
    }
    cout<<"result: "<<c<<endl;
    return 0;
}