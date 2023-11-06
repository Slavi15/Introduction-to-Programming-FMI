#include <iostream>

using namespace std;

char toUpper(char symbol);
char toLower(char symbol);

int main()
{
    char ch;

    cin >> ch;

    cout << toUpper(ch) << endl;
    cout << toLower(ch) << endl;

    return 0;
}

char toUpper(char symbol)
{
    return (symbol >= 'a' && symbol <= 'z') ? (symbol - 32) : symbol;
}
 
char toLower(char symbol)
{
    return (symbol >= 'A' && symbol <= 'Z') ? (symbol + 32) : symbol;
}