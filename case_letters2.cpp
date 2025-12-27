#include<iostream>
using namespace std;
int main()
{ 
    string str = "welcome";

    for(int i=0; str[i]; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i]-32;
        }
    }
    cout<<str<<endl;
}