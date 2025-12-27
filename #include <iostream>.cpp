#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //string copy
    char s1[20]= "Good";
    char s2[10]= "";

    strncpy(s2,s1,2);

    cout<<s2<<endl;
    return 0;
}
/* {
    //concatinate
    char s1[20]= "Good";
    char s2[10]= "Morning";

    strncat(s1,s2,4);

    cout<<s1<<endl;

    return 0;
} */


/* {
    //string length
    char *s;

    cout << "Enter the string: ";
    cin.getline(s,100);

    cout << "length" << strlen(s) << endl;

    return 0;
} */