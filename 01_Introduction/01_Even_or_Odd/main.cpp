#include <iostream>

using namespace std;

int main()
{
    int number;

    cin >> number;

    bool isEven = (number % 2 == 0);

    cout << isEven << endl;

    return 0;
}