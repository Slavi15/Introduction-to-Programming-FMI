#include <iostream>

using namespace std;

int sortDigits(unsigned number);
int sortDigitsDescending(unsigned number);
void checkForDigitOccurences(unsigned n, unsigned i, int &sorted);

int main()
{
    int num;

    cin >> num;

    cout << sortDigitsDescending(num);

    return 0;
}

int sortDigits(unsigned number)
{
    int sorted = 0;

    for (unsigned i = 1; i <= 9; i++)
        checkForDigitOccurences(number, i, sorted);

    return sorted;
}

int sortDigitsDescending(unsigned number)
{
    int sorted = 0;

    for (int i = 9; i >= 0; i--)
        checkForDigitOccurences(number, i, sorted);

    return sorted;
}

void checkForDigitOccurences(unsigned n, unsigned i, int &sorted)
{
    while (n != 0)
    {
        int lastDigit = n % 10;
        if (lastDigit == i)
            (sorted *= 10) += lastDigit;
        n /= 10;
    }
}