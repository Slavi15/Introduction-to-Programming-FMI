#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int sum = 0;
    while (true)
    {
        int number;

        cin >> number;

        if (number == -1) break;

        bool isPrime = true;

        double sqrtFromNumber = sqrt(number);
        for (int i = 2; i <= sqrtFromNumber; i++)
            if (number % i == 0)
            {
                isPrime = false;
                break;
            }

        if (n % number != 0 && isPrime) sum += number;
    }

    cout << sum << endl;

    return 0;
}