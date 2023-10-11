// Задача 15: Oт конзолата се четат 2 цели числа. Напишете програма, която разменя стойностите им без допълнителна промелнива.

// First number: 7
// Second number: 5

// First number: 5
// Second number: 7

#include <iostream>

using namespace std;

int main()
{
    int first, second;

    cout << "First number: ", cin >> first;
    cout << "Second number: ", cin >> second;

    first *= second;
    second = first / second;
    first = first / second;

    cout << "First number: " << first << "\nSecond number: " << second << endl;
}