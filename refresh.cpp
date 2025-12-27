#include <iostream>
using namespace std;
#include <string>

// int main()
// {
//    string str;
//    cout<<"Enter string : ";
//    getline(cin,str);
//    // string str = "WELCOME";

//    for(int i=0;str[i]!='\0';i++)
//    {
//       // if(65<=str[i]<=97)
//       // {
//       //    str[i] = str[i]+32;
//       // }
//       if(97<=str[i]<=122)
//       {
//          str[i]-=32;
//       }
//       // str[i]=str[i]+32;
//    }
//    cout<<str<<endl;

//    return 0;
// }

int main()
{
      string str;
      cout << "Enter string : ";
      getline(cin, str);

      int vowels = 0, consonants = 0, space = 0, digits = 0, word = 0;
      string v, w, c, d;
      bool insideWord = false;

      for (int i = 0; str[i] != '\0'; i++) // (int i = 0; i < str.length(); i++ )
      {
            char ch = str[i];

            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                  vowels++;
                  v += ch;
            }
            else if (ch >= '0' && ch <= '9')
            {
                  digits++;
                  d += ch;
            }
            else if (ch == ' ')
            {
                  if(insideWord)
                  {
                        word++;
                        insideWord = false;
                  }
            }
            else
            {
                  consonants++;
                  c += ch;
                  insideWord = true;
            }
      }
      if(insideWord)
      {
            word++;
      }
      cout << "Vowels : " << vowels << " ( " << v << " ) " << endl;
      // cout << "Spaces : " << space << endl;
      cout << "Consonents : " << consonants << " ( " << c << " ) " << endl;
      cout << "Digits : " << digits << " ( " << d << " ) " << endl;
      cout << "words : " << word << endl;
      
      return 0;
}
