#include <iostream>
using namespace std;
#include <string>
int main()
{ // using iterator

    string str = "welcome";

    string::iterator it;

    int count = 0;
    for (it = str.begin(); it != str.end(); it++)
    {
        count++;
    }
    cout<<count<<endl;
}

/* {   //using built in function

    string str = "welcome";

    cout<<str.length()<<endl;
} */

/* { //using for loop
    string str = "welcome";
    int count = 0;
    for(int i = 0;str[i]!='\0';i++)
    {
        count++;
    }
    cout<<"The count of the given string: "<<count<<endl;
    return 0;
} */
