#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    if (num % 2 == 0)
        switch (num)
        {
            case 0: cout << "0 ";
            case 2: cout << "2 ";
            case 4: cout << "4 ";
            case 6: cout << "6 ";
            case 8: cout << "8 ";
            case 10: cout << "10 ";
            case 12: cout << "12 "; break;
        }
        // for (int i = num; i <= 12; i += 2)
        //     cout << i << ' ';
    else
        switch (num)
        {
            case 1: cout << "1 ";
            case 3: cout << "3 ";
            case 5: cout << "5 ";
            case 7: cout << "7 ";
            case 9: cout << "9 ";
            case 11: cout << "11 "; break;
        }
        // for (int i = num; i <= 11; i += 2)
        //     cout << i << ' ';

    return 0;
}