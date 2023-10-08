#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> c;

    a = c / 100;
    c %= 100;
    b = c / 10;
    c %= 10;

    cout << c << b << a + 1 << endl;

    return 0;
}