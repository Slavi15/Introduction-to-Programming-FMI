#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int i = 2, numCount = 0;

    while (true)
    {
        if (n % i == 0)
        {
            numCount++;
            n /= i;
            i--;
        }
        else if (numCount > 0)
        {
            cout << i << '^' << numCount << ' ';
            numCount = 0;

            if (n == 1) break;
        }

        i++;
    }

    return 0;
}