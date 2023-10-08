#include <iostream>
// #include <algorithm>

using namespace std;

int main()
{
    int m, n;

    cin >> m >> n;

    int biggerNumber = (m * (bool)(m / n)) + (n * (bool)(n / m));

    // int biggerNumber = max(m, n);
    // std::max() imported from <algorithm>

    cout << biggerNumber << endl;

    return 0;
}