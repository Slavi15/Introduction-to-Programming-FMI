#include <iostream>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    for (int i = n; i <= m; i++)
    {
        char symbol = i;
        cout << symbol << endl;
    }

    return 0;
}