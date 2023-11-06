#include <iostream>

using namespace std;

bool isPrime(unsigned number);

int main()
{
    int n;

    cin >> n;

    cout << isPrime(n);

    return 0;
}

bool isPrime(unsigned number)
{
    if (number <= 1) return false;
 
    double sqrtNumber = sqrt(number);
    for (int i = 2; i <= sqrtNumber; i++)
        if (number % i == 0) return false;
 
    return true;
}