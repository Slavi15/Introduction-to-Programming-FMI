#include <iostream>

using namespace std;

int absoluteValue(int number);

int main()
{
    int num;

    cin >> num;

    cout << absoluteValue(num);

    return 0;
}

int absoluteValue(int number)
{
    return (number < 0) ? -number : number;
}