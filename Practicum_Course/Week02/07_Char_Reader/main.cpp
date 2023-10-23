#include <iostream>

using namespace std;

int main()
{
    char ch;

    cin >> ch;

    if (ch < 65 || (ch > 90 && ch < 97) || ch > 122)
    {
        cout << "Error" << endl;
        return 0;
    }

    bool isUppercase = false;
    bool isVowel = false;

    switch (ch)
    {
        case 65:
        case 69:
        case 73:
        case 79:
        case 85:
        case 97:
        case 101:
        case 105:
        case 111:
        case 117:
            isVowel = true;
    };

    if (ch >= 65 && ch <= 90)
        isUppercase = true;

    char flipperChar;
    (isUppercase) ? (flipperChar = ch + 32) : (flipperChar = ch - 32);

    cout << (isUppercase ? "Uppercase " : "Lowercase ");
    cout << (isVowel ? "Vowel" : "Consonant") << endl;
    cout << flipperChar << endl;

    return 0;
}