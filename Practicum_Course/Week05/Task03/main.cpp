#include <iostream>

using namespace std;

int reverseNumber (int n);
int splice (int& n, int k);

int main()
{
    int num, k;

    cin >> num >> k;

    cout << splice(num, k);

    return 0;
}

int splice (int& n, int k)
{
    int reversed = reverseNumber(n);
    n = 0;

    int count = 0;

    while (reversed != 0)
    {
        count++;
        int lastDigit = reversed % 10;

        if (count != k)
            (n *= 10) += lastDigit;

        reversed /= 10;
    }

    return n;
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