#include <iostream>

using namespace std;

void slice(int n, int& evens, int& odds);
int getDigits(int n);
int reverseNumber (int n);

int main()
{
    int num, evens = 0, odds = 0;

    cin >> num;

    slice(num, evens, odds);

    cout << evens << ' ' << odds << endl;

    return 0;
}

void slice(int n, int& evens, int& odds)
{
    int digitsN = getDigits(n);
    int reversedN = reverseNumber(n);
 
    for (int i = 1; i <= digitsN; i++)
    {
        int lastDigit = reversedN % 10;
 
        if (i % 2 == 0)
            (evens *= 10) += lastDigit;
        else
            (odds *= 10) += lastDigit;
 
        reversedN /= 10;
    }
}

int getDigits(int n)
{
    int digits = 0;
 
    while (n != 0)
    {
        digits++;
        n /= 10;
    }
 
    return digits;
}

int reverseNumber (int n)
{
    int result = 0;

    while (n != 0)
    {
        int lastDigit = n % 10;
        (result *= 10) += lastDigit;
        n /= 10;
    }

    return result;
}