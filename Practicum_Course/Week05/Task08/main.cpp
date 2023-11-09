#include <iostream>

using namespace std;

int getSwaps(int n, int b1, int b2);
bool areValid(int n, int binaryOne, int binaryTwo);
int calculateDecimalNumber(int n, int binary);
int getZeros(int binary, int n);
int power(int base, int exp);

int main()
{
    int n, binaryOne, binaryTwo;

    cin >> n >> binaryOne >> binaryTwo;

    if (areValid(n, binaryOne, binaryTwo))
        cout << (getSwaps(n, binaryOne, binaryTwo) / 2);

    return 0;
}

int getSwaps(int n, int b1, int b2)
{
    int swaps = 0;

    for (int i = 0; i < n; i++)
    {
        int b1LastDigit = b1 % 10, b2LastDigit = b2 % 10;

        if (b1LastDigit != b2LastDigit) swaps++;

        b1 /= 10;
        b2 /= 10;
    }

    return swaps;
}

bool areValid(int n, int binaryOne, int binaryTwo)
{
    return calculateDecimalNumber(n, binaryOne) != calculateDecimalNumber(n, binaryTwo) && getZeros(binaryOne, n) == getZeros(binaryTwo, n);
}

int getZeros(int binary, int n)
{
    int zeros = 0;

    for (int i = 0; i < n; i++)
    {
        if (binary % 10 == 0) zeros++;
        binary /= 10;
    }

    return zeros;
}

int calculateDecimalNumber(int n, int binary)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (binary % 10 == 1)
            sum += power(2, i);
        binary /= 10;
    }

    return sum;
}

int power(int base, int exp)
{
    if (exp == 0)
        return 1;

    int result = 1;

    for (int i = 1; i <= exp; i++)
        result *= base;

    return result;
}