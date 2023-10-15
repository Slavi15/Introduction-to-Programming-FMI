// Задача 2: От конзолата се прочитат две цели числа и се отпечатва частното и остатъка им (пълноценното им деление)

// Dividend: 29
// Divisor: 5

// Divison quotient: 5
// Divison remainder: 4

#include <iostream>

using namespace std;

int main()
{
    int dividend, divisor;

    cout << "Dividend: ", cin >> dividend;
    cout << "Divisor: ", cin >> divisor;

    int quotient = (dividend / divisor), remainder = (dividend % divisor);

    cout << "Division quotient: " << quotient << "\nDivision remainder: " << remainder << endl;
}