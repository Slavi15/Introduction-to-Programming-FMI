// Задача 11: Дадени са ви 4 на брой цели числа - a, b, c, d. Да се изведе дали интервалите [a, b] и [c, d] се пресичат.

// First interval: 2 5
// Second interval: 1 4

// 1

#include <iostream>
 
using namespace std;

int main()
{
	int a, b, c, d;
 
	cout << "First interval: ", cin >> a >> b;
	cout << "Second interval: ", cin >> c >> d;
 
	bool isTrue = (c < b) || (c < a) || (a < d) || (a < c);
 
	cout << isTrue << endl;
}