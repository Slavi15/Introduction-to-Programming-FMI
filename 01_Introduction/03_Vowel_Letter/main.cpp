#include <iostream>

using namespace std;

int main()
{
    char ch;

    cin >> ch;

    bool isVowel = (ch == 65) || (ch == 69) || (ch == 73) || (ch == 79) || (ch == 85) || (ch == 97) || (ch == 101) || (ch == 105) || (ch == 111) || (ch == 117);

    cout << isVowel << endl;

    return 0;
}