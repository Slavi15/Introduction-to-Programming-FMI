// Въвежда се трицифрено цяло число n. Да се отпечата обърнатото число събрано с единица.
// Вход: 265, Изход: 563
// Вход: 289, Изход: 983

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