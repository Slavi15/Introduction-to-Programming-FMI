#include <iostream>

using namespace std;

bool isDigit(char symbol);

int main()
{
    char ch;

    cin >> ch;

    cout << isDigit(ch) << endl;

    return 0;
}

bool isDigit(char symbol)
{
    return (symbol >= '0' && symbol <= '9') ? true : false;
}

bool isLower(char symbol)
{
    return (symbol >= 97 && symbol <= 122) ? true : false;
}

bool isUpper(char symbol)
{
    return (symbol >= 65 && symbol <= 90) ? true : false;
}