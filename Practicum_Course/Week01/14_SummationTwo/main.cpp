// Задача 14: Потребителят въвежда число n. Да се изведе сборът на числата, които се делят на 3 и са по-малки или равни на n.

// n: 15

// The total sum is: 45

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "n: ", cin >> n;

    int countNumbers = (n / 3);
    int sum = 3 * ((2 + (countNumbers - 1)) * (countNumbers / 2.0));

    cout << "The total sum is: " << sum << endl;
}