#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter: ";
    cin>> str;

    string rev; // creating a empty variable to store reversed string//

    int len = (int)str.length();

    rev.resize(len);

    for(int i = 0, j=len-1;i<len;i++,j--)
    {
        rev[i]=str[j];
    }
    rev[len]='\0';

    cout<<rev<<endl;

    if(str == rev)
        cout<<"PALINDROME"<<endl;
    else
        cout<<"NOT A PALINDROME"<<endl;

    return 0;
}