#include <iostream>
// #include <math.h>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    // int result = pow((a + b), 4) - pow((a - b), 2);
    // std::pow() function imported from <math.h>

    int result = ((a + b) * (a + b) * (a + b) * (a + b)) - ((a - b) * (a - b));

    cout << result << endl;

    return 0;
}