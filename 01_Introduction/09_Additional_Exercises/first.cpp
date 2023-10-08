// Въвежа се цяло число. Да се отпечата "Yes", ако числото е валидна оценка от училище, и "No", ако не е валидна.

#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    char isValid = (num >= 2 && num <= 6) && cout << "Yes" << endl || cout << "No" << endl;

    return 0;
}