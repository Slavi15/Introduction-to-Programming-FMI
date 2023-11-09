#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    int count = 2;

    while (true)
    {
        if ((a * count) % b == 0)
        {
            cout << (a * count) << endl;
            break;
        }

        count++;
    }

    return 0;
}