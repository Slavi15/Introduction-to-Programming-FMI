// Въвеждат се две числа. Да се отпечата по-голямото от двете.
// Вход: 265, 44, Изход: 265

#include <iostream>
// #include <algorithm>

using namespace std;

int main()
{
    int m, n;

    cin >> m >> n;

    bool biggerNumber = (m > n) && cout << m << endl || cout << n << endl;

    // bool mIsBigger = (m / n);
    // bool nIsBigger = (n / m);

    // int biggerNumber = (m * mIsBigger) + (n * nIsBigger);

    // int biggerNumber = max(m, n);
    // std::max() imported from <algorithm>

    return 0;
}