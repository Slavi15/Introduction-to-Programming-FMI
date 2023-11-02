#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    int sum = 0;

    for (int i = n; i <= m; i++)
    {
        bool isPrime = true;

        double squareRootOfN = sqrt(i);
        for (int j = 2; j <= squareRootOfN; j++)
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }

        if (isPrime)
            sum += i;
    }

    cout << "Sum of primes: " << sum << endl;

    return 0;
}