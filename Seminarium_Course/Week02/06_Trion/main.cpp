#include <iostream>

using namespace std;

int main()
{
    int x1, x2, x3, x4, x5;

    cin >> x1 >> x2 >> x3 >> x4 >> x5;

    if (((x2 >= x1 && x2 >= x3) || (x2 <= x1 && x2 <= x3)) && ((x3 >= x2 && x3 >= x4) || (x3 <= x2 && x3 <= x4)))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}