#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;

    if ((b >= a && b >= c && c <= d && d >= e) || (b <= a && b <= c && c >= d && d <= e))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}