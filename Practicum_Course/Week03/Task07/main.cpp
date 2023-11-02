#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        int num;

        cin >> num;

        int copyOfNum = num, digitsSum = 0;
        while (copyOfNum != 0)
        {
            int lastDigit = (copyOfNum % 10);
            digitsSum += lastDigit;
            copyOfNum /= 10;
        }

        if ((num + digitsSum) % 10 != 0)
        {
            cout << "Bad Number: " << num << endl;
        }
        else
        {
            cout << num << endl;
            break;
        }
    }

    return 0;
}