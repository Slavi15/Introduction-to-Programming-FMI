#include <iostream>

using namespace std;

int getLength(int number);

int main()
{
    int n;

    cin >> n;

    cout << getLength(n);

    return 0;
}

int getLength(int number)
{
    int digits = 0;
 
    while (number != 0)
    {
        number /= 10;
        digits++;
    }
 
    return digits;
}