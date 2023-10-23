#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int max = a, min = a;

    if (b > max) max = b;
    if (c > max) max = c;

    if (b < min) min = b;
    if (c < min) min = c;

    int sum = a + b + c;
    int mediumValue = sum - (max + min);

    int number = (max * 100) + (mediumValue * 10) + min;

    cout << number << endl;
}