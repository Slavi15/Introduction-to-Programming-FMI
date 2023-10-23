#include <iostream>

using namespace std;

int main()
{
    double n;

    cin >> n;

    int compareNumber = n;

    cout << (((n - compareNumber) == 0) ? "Integer" : "Not an integer") << endl;

    return 0;
}