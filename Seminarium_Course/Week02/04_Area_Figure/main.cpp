#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    char figure;

    cin >> figure;

    double a;

    switch (figure)
    {
        case 's':
            int n;

            cin >> n;

            cout << (n * n) << endl;

            break;
        case 'r':
            double b;

            cin >> a >> b;

            cout << (a * b) << endl;

            break;
        case 'c':
            int radius;

            cin >> radius;

            cout << (M_PI * radius * radius) << endl;

            break;
        case 't':
            double h;

            double area = (a * h) / 2.0;

            cout << area << endl;

            break;
    }

    return 0;
}