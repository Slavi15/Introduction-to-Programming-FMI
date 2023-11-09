#include <iostream>

using namespace std;

void swapNumbers(int& n, int& m, int k);
int getDigitOnPosition(int n, int k);
int concatNumberWithDigit (int n, int m, int k);
int reverseNumber (int n);

int main()
{
    int n, m, k;

    cin >> n >> m >> k;

    swapNumbers(n, m, k);

    cout << n << ' ' << m << endl;

    return 0;
}

void swapNumbers(int& n, int& m, int k)
{
    int copyN = n;
    int copyM = m;

    n = concatNumberWithDigit(copyN, copyM, k);
    m = concatNumberWithDigit(copyM, copyN, k);
}

int concatNumberWithDigit (int n, int m, int k)
{
    int reversed = reverseNumber(n);
    int num = 0;

    int count = 0;
    while (reversed != 0)
    {
        count++;
        int lastDigit = reversed % 10;

        (count != k) ? ((num *= 10) += lastDigit) : ((num *= 10) += getDigitOnPosition(m, k));

        reversed /= 10;
    }

    return num;
}

int getDigitOnPosition(int n, int k)
{
    int reversed = reverseNumber(n);
    int count = 0;

    while (reversed != 0)
    {
        count++;

        if (count == k)
            return reversed % 10;

        reversed /= 10;
    }

    return 0;
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