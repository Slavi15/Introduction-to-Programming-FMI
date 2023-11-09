#include <iostream>

using namespace std;

int reverseNumber (int n);
int slice (int& n, int i, int j);

int main()
{
    int num, startPosition, finalPosition;

    cin >> num >> startPosition >> finalPosition;

    cout << slice(num, startPosition, finalPosition);

    return 0;
}

int slice (int& n, int i, int j)
{
    int reversed = reverseNumber(n);
    n = 0;

    int count = 0;
    while (reversed != 0)
    {
        count++;
        int lastDigit = reversed % 10;

        if (count >= i && count <= j)
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