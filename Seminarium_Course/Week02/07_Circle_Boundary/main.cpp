#include <iostream>

using namespace std;

int main()
{
    int radius, x, y;

    cin >> radius >> x >> y;

    int formula = (x * x) + (y * y);

    if (formula > (radius * radius))
    {
        cout << "Out of the circle" << endl;
    }
    else if (formula < (radius * radius))
    {
        cout << "In the circle" << endl;
    }
    else
    {
        cout << "On the circle" << endl;
    }

    return 0;
}