#include <iostream>

using namespace std;

int power(int base, unsigned exponent);

int main()
{
    int base, exp;

    cin >> base >> exp;

    cout << power(base, exp) << endl;

    return 0;
}

int power(int base, unsigned exponent)
{
    if (!base)
        return base;

    if (!exponent)
        return exponent;

    int num = 1;
    for (unsigned i = 0; i < exponent; i++)
        num *= base;
 
    return num;
}