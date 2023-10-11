// Задача 7: От конзолата се четат 3 реални числа. Да се изведе дали могат да бъдат страни на триъгълник.

// 5 13 10

// 1

#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	bool isTriangle = ((a + b) > c) && ((a + c) > b) && ((b + c) > a);

	cout << isTriangle << endl;
}