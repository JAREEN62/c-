#include <iostream>
using namespace std;
#include <string>
int main()
/* { // to lower case
    string str = "WELcOmE";

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90) //ckecking if the given letters are upper case
        {
            str[i] = str[i] + 32;
        }
       
    }
    cout << str<< endl;
} */

{// to upper case
    string str = "WeLcOmE7";

    for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 97 && str[i] <= 122) //ckecking if the given letters are upper case
            {
            str[i] -= 32;
            }
        }
    cout << str << endl;
}
