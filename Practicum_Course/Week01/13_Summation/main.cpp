// Задача 13: Потребителя въвежда число n. Да се изведе сумата на числата от 1 до n.

// n: 3

// The total sum is: 6

#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int sum = (n / 2.0) * ((2 + (n - 1) * 1));

	cout << "The total sum is: " << sum << endl;
}