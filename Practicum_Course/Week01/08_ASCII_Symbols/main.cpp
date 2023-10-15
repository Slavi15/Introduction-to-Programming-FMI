// Задача 8: От конзолата се въвеждат 6 символа. Да се провери дали сумата от ASCII кодовете на тези символи се дели на 3. Ако се дели на 3 да се изведе на конзолата 1, ако не - 0.

// a b c d f z

// 1

#include <iostream>

using namespace std;

int main()
{
	char a, b, c, d, f, z;

	cin >> a >> b >> c >> d >> f >> z;

	bool isOdd = ((a + b + c + d + f + z) % 3 == 0);

	cout << isOdd << endl;
}