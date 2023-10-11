// Задача 4: Въвежа се цяло число. Да се отпечата 1, ако числото е валидна оценка от училище, и 0, ако не е валидна.

#include <iostream>

using namespace std;

int main()
{
	int grade;
 
	cin >> grade;
 
	bool isValid = (grade >= 2 && grade <= 6);
 
	cout << isValid << endl;
}