// Задача 1: Въвежда се цяло число. Отпечатайте 1, ако числото е четно и 0, ако е нечетно. Пример: Вход: 122 Изход: 1

#include <iostream>
 
using namespace std;
 
int main()
{
    int num;
 
    cin >> num;
 
    bool isEven = (num % 2 == 0);
 
    cout << isEven << endl;
}