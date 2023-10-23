#include <iostream>

using namespace std;

int main()
{
    double leftBorder, rightBorder, num;

    cin >> leftBorder >> rightBorder >> num;

    bool isOpen = false;

    if (abs(num - leftBorder) <= 0.001 || abs(rightBorder - num) <= 0.001)
        cout << "The number is within the given interval. The interval is closed." << endl;
    else if (abs(num - leftBorder) >= 0.001 && abs(rightBorder - num) >= 0.001)
        cout << "The number is within the given interval. The interval is open." << endl;
}