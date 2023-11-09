#include <iostream>

using namespace std;

int gcd (int a, int b);
void fractions (int& a, int& b);

int main()
{
    int a, b;

    cin >> a >> b;

    fractions(a, b);

    cout << a << ' ' << b;

    return 0;
}

void fractions (int& a, int& b)
{
    int mutualGCD = gcd(a, b);
    a /= mutualGCD;
    b /= mutualGCD;
}

int gcd (int a, int b)
{
    int r = 0;

    while ((a % b) != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    return b;
}