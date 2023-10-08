// Напишете програма, която въвежда две числа - a и b и извежда като резултат (a + b)^4 - (a-b)^2
// Вход: 5 7, Изход: 20732

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