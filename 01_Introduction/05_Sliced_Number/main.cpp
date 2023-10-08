// Въвежда се цяло число. Да се отпечата без последната цифра.
// Вход: 513, Изход: 51
// Вход: 1234, Изход: 123

#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    num /= 10;

    cout << num << endl;

    return 0;
}