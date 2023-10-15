// Задача 9: Въвежда се трицифрено цяло число n. Да се отпечата числото наобратно, събрано с единица.

// n: 289

// 983

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

	int invertedNumber = (c * 100) + (b * 10) + (a + 1);

	cout << invertedNumber << endl;
}