#include <iostream>

using namespace std;

int main()
{
    int day, month;

    cin >> day >> month;

    int nextDay = (day * (day < 31)) + 1;
    int nextMonth = month + (nextDay < day);

    cout << nextDay << ' ' << nextMonth << endl;

    return 0;
}