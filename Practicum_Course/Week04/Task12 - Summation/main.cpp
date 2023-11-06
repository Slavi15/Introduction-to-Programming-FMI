#include <iostream>

using namespace std;

int sumInterval(int m, int n);

int main()
{
    int m, n;

    cin >> m >> n;

    cout << sumInterval(m, n);

    return 0;
}

int sumInterval(int m, int n)
{
    if (m >= n)
        return -1;

    int sum = 0;

    for (int i = m; i <= n; i++)
        sum += i;

    return sum;
}