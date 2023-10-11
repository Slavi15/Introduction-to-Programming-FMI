// Задача 16: Потребителят въвежда две цели числа n и m. Да се изведе по-малкото от тях.

// n: 19
// m: 3

// 3 is the smaller number

#include <iostream>

using namespace std;

int main()
{
	int n, m;
 
	cout << "n: ", cin >> n;
	cout << "m: ", cin >> m;
 
	(n < m) && cout << n << " is the smaller number" << endl || cout << m << " is the smaller number" << endl;
}