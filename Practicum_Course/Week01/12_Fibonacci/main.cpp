// Задача 12: Създайте програма, която чете 5 числа. Да се изведе 1, ако числата са част от редицата на Фибоначи в реда, в който са въведени, и 0 - в противен случай

// 2 3 5 8 13

// 1

#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e;

	cin >> a >> b >> c >> d >> e;

	bool isValid = (a + b == c) && (b + c == d) && (c + d == e);

	cout << isValid << endl;
}