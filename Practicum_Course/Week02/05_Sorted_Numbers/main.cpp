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

    cout << min << ' ' << mediumValue << ' ' << max << endl;

    return 0;
}