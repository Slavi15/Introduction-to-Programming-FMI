#include <iostream>

using namespace std;

int getRemainder(int first, int second);

int main()
{
    int first, second;

    cin >> first >> second;

    cout << getRemainder(first, second);

    return 0;
}

int getRemainder(int first, int second)
{
    int division = first / second;
    return first - (division * second);
}