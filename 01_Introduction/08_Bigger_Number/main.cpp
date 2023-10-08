#include <iostream>
// #include <algorithm>

using namespace std;

int main()
{
    int m, n;

    cin >> m >> n;

    bool mIsBigger = (m / n);
    bool nIsBigger = (n / m);

    int biggerNumber = (m * mIsBigger) + (n * nIsBigger);

    // int biggerNumber = max(m, n);
    // std::max() imported from <algorithm>

    cout << biggerNumber << endl;

    return 0;
}