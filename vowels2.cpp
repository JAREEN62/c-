#include <iostream>
#include <cctype> // Include cctype header for isalpha() and isdigit() functions
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int upper_consonant = 0, lower_consonant = 0, vowel = 0, space = 0, wordCount = 0, numberCount = 0, specialCharCount = 0;

    bool inWord = false; // Flag to track if currently in a word

    for (char c : str)
    {
        if (isspace(c))
        {
            if (inWord) // If previously in a word, increment word count
            {
                wordCount++;
                inWord = false;
            }
            space++; // Count spaces
        }
        else if (isalpha(c))
        {
            inWord = true; // Set the flag indicating we're in a word
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
                c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                vowel++; // Count vowels
            }
            else
            {
                if (isupper(c))
                {
                    upper_consonant++; // Count uppercase consonants
                }
                else
                {
                    lower_consonant++; // Count lowercase consonants
                }
            }
        }
        else if (isdigit(c))
        {
            numberCount++; // Count numbers
        }
        else
        {
            specialCharCount++; // Count special characters
        }
    }

    // Check if the last character was a part of a word
    if (inWord)
    {
        wordCount++;
    }

    cout << "\nNumber of words: " << wordCount << endl;
    cout << "\nVowels: " << vowel << endl;
    cout << "\nLower case consonants: " << lower_consonant << endl;
    cout << "\nUpper case consonants: " << upper_consonant << endl;
    cout << "\nNumbers: " << numberCount << endl;
    cout << "\nSpecial Characters: " << specialCharCount << endl;
    return 0;
}
