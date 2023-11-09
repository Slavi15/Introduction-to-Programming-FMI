#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    for (int i = a; i > 0; i--)
        for (int j = b; j > 0; j--)
            if (a % i == 0 && b % j == 0 && i == j)
            {
                cout << i << endl;
                return 0;
            }
}