#include <iostream>
#include <math.h>

using namespace std;

bool isSquareRoot(int number);

int main()
{
    int n;

    cin >> n;

    cout << isSquareRoot(n);

    return 0;
}

bool isSquareRoot(int number)
{
    if (number < 0)
        return false;

    double sqrtNumber = sqrt(number);

    return (sqrtNumber * sqrtNumber == number);
}