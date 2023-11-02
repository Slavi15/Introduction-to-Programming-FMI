#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n == 1)
    {
        cout << '0' << endl;
        return 0;
    }
    else if (n == 2)
    {
        cout << "0 1" << endl;
        return 0;
    }

    int first = 0, second = 1, count = 0;

    cout << "0 1 ";

    while (count < (n - 2))
    {
        int current = first + second;
        first = second;
        second = current;

        cout << current << ' ';

        count++;
    }

    return 0;
}