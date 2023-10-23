#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;

    cin >> d;

    a = d / 1000;
    d %= 1000;

    b = d / 100;
    d %= 100;

    c = d / 10;
    d %= 10;

    int numberOne = (a * 10) + d;
    int numberTwo = (b * 10) + c;

    (numberOne > numberTwo) ? (cout << numberOne << " > " << numberTwo << endl) : (cout << numberOne << " < " << numberTwo << endl);

    return 0;
}