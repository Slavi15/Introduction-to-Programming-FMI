#include <iostream>

using namespace std;

int concat(unsigned first, unsigned second);
int reverseNumber(int n);

int main()
{
    int first, second;

    cin >> first >> second;

    cout << concat(first, second);

    return 0;
}

int reverseNumber(int n)
{
    int num = 0;

    while (n != 0)
    {
        int lastDigit = (n % 10);
        (num *= 10) += lastDigit;
        n /= 10;
    }

    return num;
}

int concat(unsigned first, unsigned second)
{
    int reversedSecond = reverseNumber(second);

    while (reversedSecond != 0)
    {
        int lastDigit = reversedSecond % 10;
        (first *= 10) += lastDigit;
        reversedSecond /= 10;
    }

    return first;
}