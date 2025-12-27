#include<iostream>
using namespace std;

 int main()
    {
        string str;
        cout<<"enter a string: ";
        int vowels=0,u_consonants=0,lower_consonants=0,words=0;  
        bool flag=false;
        getline(cin,str);

        for(const char& c:str) {
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'
            || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
            {
                flag = true;
                vowels++;
            }
            else if (c >='A' && c<='Z' )
            {
                flag = true;
                u_consonants++;
            }
            else if (c >='a' && c<='z' )
            {
                flag = true;
                lower_consonants++;
            }
            else if (c==' ')
            {
                if (flag==true)  
                {
                    flag = false;
                    words++;

                }          
            }  
        }
        if (flag==true)
        {
            words++;
        }
        cout<<"vowels: "<<vowels<<endl;
        cout<<"upper case consonants: "<<u_consonants<<endl;
        cout<<"lower case consonants: "<<lower_consonants<<endl;    
        cout<<"words: "<<words<<endl;
        return 0;
    }