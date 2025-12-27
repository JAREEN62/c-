#include<iostream>
using namespace std;
int main()
{
    string str;
    int count = 0;
    str = "welcome";
    for(int i = 0;str[i]!='\0';i++)
    {
        count++;
    }
    cout<<"Length of the string is: "<<count<<endl;
    return 0;
}
{
    string str = "welcome";
    str:: interator it;
    for(it = str.begin();it!=str.end();it++)
    {
        count++;
    }
    cout<<"Length of the string is: "<<count<<endl;
    return 0;
}


