#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    bool isPrime = true;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            isPrime = false;

    cout << (isPrime ? "Prime" : "Not Prime") << endl;

    return 0;
}