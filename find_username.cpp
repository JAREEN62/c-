#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string email;
    char ch;
    cout << "Enter the email Address : ";
    getline(cin, email);

    int i = email.rfind("@");
    if (i == string::npos)
    {
        cout << "Invalid email does not have '@'!\n";
        return 0;
    }
    string uname = email.substr(0, i);
    bool isValid = false;

    for (int i = 0; i < uname.length(); i++)
    {
        ch = uname[i];
        if (isalpha(ch) || isdigit(ch) || isalnum(ch))
        {
            isValid = true;
        }
        else
        {
            isValid = false;
            break;
        }
    }
    if (isValid)
    {
        cout << "Username : " << uname << " is valid email id!\n";
    }
    else
    {
        cout << "Username : " << uname << " is Invalid email id!!\n";
    }

    return 0;
}