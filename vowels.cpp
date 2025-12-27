#include <iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);

    int cons=0, vowel=0, space=0;
    for( int i = 0;str[i]!='\0';i++)
    {
        if(str[i] =='A'||str[i] =='E'||str[i] =='I'||str[i] =='O'||str[i] =='U'||
            str[i] == 'a'||str[i] =='e'||str[i] =='i'||str[i] =='o'||str[i] =='u')
            {
                vowel++;
            }
            else if(str[i] ==' ')
            {
                    space++;
            }
            else
            {
                cons++;
            }        
    }
    cout << "\nNumber of words: " << space+1<< endl; // add +1 to the count of spaces to get the number of words
    cout << "\nVowels: " << vowel << endl;
    cout << "\nconsonent: " << cons  << endl;

}

/* { \\another method\\
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int upper_consonent = 0, lower_consonent = 0, vowel = 0, word = 0, space = 0, number = 0, special_char = 0;

    bool inword = false;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];

        if (c == ' ')
        {
            if (inword)
            {
                inword = false;
                word++;
            }
        }

        else
        {
            inword = true;
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
                c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                vowel++;
            }
            else
            {
                if (c >= 65 && c <= 90)
                {
                    upper_consonent++;
                }
                else if (c >= 97 && c <= 122)
                {
                    lower_consonent++;
                }
            }
        }
    }

    if (inword)
    {
        word++;
    }
    
    cout << "\nNumber of words: " << word << endl; // add +1 to the count of spaces to get the number of words
    cout << "\nVowels: " << vowel << endl;
    cout << "\nLower case consonent: " << lower_consonent << endl;
    cout << "\nUpper case consonent: " << upper_consonent << endl;
    return 0;
} */