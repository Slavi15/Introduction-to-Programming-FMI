// Задача 6: Напишете програма, която обръща подадени градуси от Целзий (C) във Фаренхайт (F). Формулата за това е: F = (9 / 5) * C + 32

// Celsius: 17

// Fahrenheit: 62.6

#include <iostream>

using namespace std;

int main()
{
    int celsiusDegrees;

    cout << "Celsius: ", cin >> celsiusDegrees;

    float fahrenheitDegrees = ((9.0 / 5) * celsiusDegrees) + 32;

    cout << "Fahrenheit: " << fahrenheitDegrees << endl;
}