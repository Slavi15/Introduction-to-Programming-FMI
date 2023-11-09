#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int numCount = 0;

    for (int i = sqrt(n); i > 1; i--)
    {
        if (n % i == 0)
        {
            numCount++;
            n /= i;
            i++;
        }
        else if (numCount > 0)
        {
            cout << i << '^' << numCount << ' ';
            numCount = 0;
        }
    }

    return 0;
}