#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    (n / 10 == 0) && cout << n << endl || (n / 100 == 0) && cout << ((n % 10) + 1) << endl || cout << (n / 10) << endl;
}