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
 
	result = (a * (a % 2)) + (b * (b % 2)) + (c * (c % 2)) + (d * (d % 2)) + (e * (e % 2));
 
	cout << result << endl;
}