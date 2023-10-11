// Задача 5: От конзолата се въвеждат 5 цели числа. Да се изведе сумата на нечетните числа

// 2 7 18 9 5

// 21

#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e;
 
	cin >> a >> b >> c >> d >> e;
 
	int result = 0;
 
	(a % 2 != 0) && (result += a);
	(b % 2 != 0) && (result += b);
	(c % 2 != 0) && (result += c);
	(d % 2 != 0) && (result += d);
	(e % 2 != 0) && (result += e);
 
	cout << result << endl;
}