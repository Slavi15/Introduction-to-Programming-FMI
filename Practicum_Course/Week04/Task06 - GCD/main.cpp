#include <iostream>

using namespace std;

int gcd(int first, int second);

int main()
{
    int first, second;

    cin >> first >> second;

    cout << gcd(first, second);

    return 0;
}

int gcd(int first, int second)
{
    int r = 0;
 
    while ((first % second) > 0)
    {
        r = first % second;
        first = second;
        second = r;
    }
 
    return second;
}