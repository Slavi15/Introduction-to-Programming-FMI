#include <iostream>

using namespace std;

int toNumber(char symbol);
char toCharacter(int n);

int main()
{
    int num;
    cin >> num;

    char ch;
    cin >> ch;

    cout << toCharacter(num) << endl;
    cout << toNumber(ch) << endl;

    return 0;
}

bool isDigit(char symbol)
{
    return (symbol >= '0' && symbol <= '9') ? true : false;
}

int toNumber(char symbol)
{
    return isDigit(symbol) ? symbol - '0' : symbol;
}

bool isLetter(int n)
{
    return (n >= 65 && n <= 90 || n >= 97 && n <= 122) ? true : false;
}
 
char toCharacter(int n)
{
    return (isLetter(n)) ? n : n + '0';
}