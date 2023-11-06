#include <iostream>

using namespace std;

int reverseNumber(int n);
int getDigitOnPosition(int number, unsigned position);
int getLength(int number);

int main()
{
    int num, pos;

    cin >> num >> pos;

    cout << getDigitOnPosition(num, pos);

    return 0;
}

int getDigitOnPosition(int number, unsigned position)
{
    if (position > getLength(number))
        return -1;

    int reversed = reverseNumber(number);

    for (unsigned i = 1; i < position; i++)
        reversed /= 10;

    return reversed % 10;
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

int getLength(int number)
{
    int digits = 0;

    while (number != 0)
    {
        number /= 10;
        digits++;
    }

    return digits;
}