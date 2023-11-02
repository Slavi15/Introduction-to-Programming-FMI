#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int sum = 0;

    for (int i = 100; i < 1000; i++)
    {
        int digitsSum = 0, copyOfIter = i;
        bool isPrime = true;

        while (copyOfIter != 0)
        {
            int lastDigit = (copyOfIter % 10);
            digitsSum += lastDigit;
            copyOfIter /= 10;
        }

        if (digitsSum <= 1)
            isPrime = false;
        else
        {
            double squareRootOfNumber = sqrt(digitsSum);
            for (int j = 2; j <= squareRootOfNumber; j++)
                if (digitsSum % j == 0)
                {
                    isPrime = false;
                    break;
                }

            if (digitsSum > 9 && isPrime)
                sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}