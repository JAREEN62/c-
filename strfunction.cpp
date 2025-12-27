#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //tokanizers
    char s[20] = "x=10;y=20;z=35";

    char *token = strtok(s,";");

    while(token!= NULL)
    {
    cout<<token<<endl;
    token=strtok(NULL,";");
    }
    return 0;
}
/* {
    //to integer and float
    char s1[10] = "235";
    char s2[10] = "54.78";

    long int x = strtol(s1, NULL, 10);
    float y = strtof(s2, NULL);

    cout << x+10 << endl
         << y-5 << endl;
    return 0;
} */
/* {
    //string compare - comparing two strings
    char s1[20]= "hello";
    char s2[20]= "Hello";

    cout<<"--> "<<strcmp(  s1,s2)<<endl;
    return 0;

} */
/* {
    //stringcharacter-finding the appariance of a character in the main string
    char s1[20] = "programming";
    cout<<strchr(s1,'g')<<endl;//first occurance
    cout<<strrchr(s1,'g')<<endl;//rear end occurance

    return 0;
} */
/* {
    //substring
    char s1[20]= "Programming";
    char s2[10]= "kite";
    if(strstr(s1,s2)!=NULL)
    cout<<strstr(s1,s2)<<endl;
    else
    {
        cout<<"not found!"<<endl;
    }
    return 0;
} */
/* {
    //string copy
    char s1[20]= "Good";
    char s2[10]= "";
    strcpy(s2,s1);
    strncpy(s2,s1,2);

    cout<<s2<<endl;
    return 0;
} */
/* {
    //concatinate
    char s1[20]= "Good";
    char s2[10]= "Morning";
    strcat(s1,s2);
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