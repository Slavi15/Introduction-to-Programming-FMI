// Изпит УП 2022-23 - Задача 2

#include <iostream>

using namespace std;

bool isDivisableByValue(int number, int divisor);

int main()
{
    int n, divisor;

    cin >> n >> divisor;

    cout << isDivisableByValue(n, divisor);

    return 0;
}

bool isDivisableByValue(int number, int divisor)
{
    int result = number / divisor;
    return (result * divisor == number);
}