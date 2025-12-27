#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int upper_consonant = 0, lower_consonant = 0, vowel = 0, word_count = 0;

    bool in_word = false; // flag to track whether currently in a wor˜Ωd or not

    for (int i = 0; str[i] != '\0'; i++) 
    {
        char ch = str[i];

        if (ch == ' ') 
        {
            if (in_word) 
            { // transition from word to space
                in_word = false;
                word_count++;
            }
        } 
        else 
        { // non-space character
            in_word = true;
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                vowel++;
            }
            else if (ch >= 'A' && ch <= 'Z') 
            {
                upper_consonant++;
            } 
            else if (ch >= 'a' && ch <= 'z') 
            {
                lower_consonant++;
            }
        }
    }

    // Check if there's any remaining word after the loop ends
    if (in_word) 
    {
        word_count++;
    }

    cout << "\nNumber of words: " << word_count << endl;
    cout << "\nVowels: " << vowel << endl;
    cout << "\nLower case consonants: " << lower_consonant << endl;
    cout << "\nUpper case consonants: " << upper_consonant << endl;
    return 0;
}

