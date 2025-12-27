#include <iostream>
#include <string>
using namespace std;
int main()
{

    string str;

    cout << "Enter a string : ";
    getline(cin, str);

    string s2 = str;

    string rev = " "; // new string to store the reverse string.

    int len = str.length();

    rev.resize(len); // makes the size of rev equal to str.

    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        rev[i] = str[j];
    }
    string r2 = rev;

    /* transform(rev.begin(), rev.end(), rev.begin(), ::tolower); */
    /* transform(str.begin(), str.end(), str.begin(), ::tolower); */ //using transform function
    for (int i = 0; i < len; i++)
    {
        rev = tolower(rev[i]);
        str = tolower(str[i]);
    }

    rev[len] = '\0';

    if (str == rev) // using compare function  if(str.compare(rev)==0)
    {
        cout << "*** " << s2 << " = " << r2 << " is a Palindrome! ***\n";
    }
    else
    {
        cout << "*** " << s2 << " != " << r2 << " is Not a Palindrome! ***\n\n";
    }

    return 0;
}
