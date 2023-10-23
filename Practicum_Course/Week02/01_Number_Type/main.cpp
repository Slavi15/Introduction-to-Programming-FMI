#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n < 0)
        cout << "Negative" << endl;
    else if (n > 0)
        cout << "Positive" << endl;
    else
        cout << 0 << endl;

    return 0;
}