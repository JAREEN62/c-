#include <iostream>
#include <string>
using namespace std;
int main()
{
    //without using a string iterator.
    string str = "today";
    
    for(int i = 0; str[i] != '\0';i++ )
    {
        str[i]= str[i]- 32;
    }
    cout<<str<<endl;
    return 0;
}
/* {
    string str = "hello ";

    string::reverse_iterator it;

    for (it = str.rbegin(); it != str.rend(); it++)
    {
        cout << *it << endl;

    return 0;
} */

/* {
    string str = "hello ";

    string::iterator it;

    for (it = str.begin(); it != str.end(); it++)
    {
        *it = *it - 32; // makeing lower case to upper case
    }
    cout << str << endl; // de-referencing it
    return 0;
}
 */