#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int halfN = n / 2;
    for (int i = 2; i <= halfN; i++)
    {
        bool isFirstPrime = true, isSecondPrime = true;

        double squareN = sqrt(i);
        for (int j = 2; j <= squareN; j++)
            if (i % j == 0)
            {
                isFirstPrime = false;
                break;
            }

        if (!isFirstPrime) continue;

        double squareSecondNumber = sqrt(n - i);
        for (int j = 2; j <= squareSecondNumber; j++)
            if ((n - i) % j == 0)
            {
                isSecondPrime = false;
                break;
            }

        if (isFirstPrime && isSecondPrime)
        {
            int sumPrimes = i + (n - i);

            if (sumPrimes == n)
                cout << sumPrimes << " = " << i << " + " << (n - i) << endl;
        }
    }

    return 0;
}