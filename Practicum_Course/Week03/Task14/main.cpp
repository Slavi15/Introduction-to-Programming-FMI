#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int count = 0;
    double anValue = 0.5;

    while (count != n)
    {
        anValue = (((anValue * anValue) + 1) / 2.0);
        count++;
    }

    cout << "a_n = " << anValue << endl;

    return 0;
}