// Въвежда се цяло число. Да се отпечата 1, ако числото е валидна оценка от училище, и 0, ако не е валидна.
// Вход: 5, Изход: 1
// Вход: 3, Изход: 1
// Вход: 9, Изход: 0

#include <iostream>

using namespace std;

int main()
{
    int grade;

    cin >> grade;

    bool isValid = (grade >= 2) && (grade <= 6);

    cout << isValid << endl;

    return 0;
}