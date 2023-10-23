#include <iostream>

using namespace std;

int main()
{
    int radius, x, y;

    cin >> radius >> x >> y;

    int pythagorean = (x * x) + (y * y);

    if ((radius * radius) == pythagorean)
        cout << "On the circle" << endl;
    else if ((radius * radius) >= pythagorean)
        cout << "In the circle" << endl;
    else
        cout << "Out of the circle" << endl;

    return 0;
}