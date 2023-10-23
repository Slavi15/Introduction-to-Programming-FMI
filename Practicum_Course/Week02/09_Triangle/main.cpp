#include <iostream>

using namespace std;

int main()
{
    double a, b, c;

    cin >> a >> b >> c;

    bool isTriangle = (a + b > c) && (a + c > b) && (b + c > a);

    cout << ((isTriangle) ? "This triangle exists." : "This triangle doesn't exist.") << endl;

    return 0;
}