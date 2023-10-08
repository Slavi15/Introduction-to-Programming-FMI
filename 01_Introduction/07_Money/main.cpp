#include <iostream>

using namespace std;

int main()
{
    int n, hundredBanknotes, fiftyBanknotes, twentyBanknotes, fiveBanknotes, twoBanknotes;

    cin >> n;

    hundredBanknotes = n / 100;
    n %= 100;

    fiftyBanknotes = n / 50;
    n %= 50;

    twentyBanknotes = n / 20;
    n %= 20;

    fiveBanknotes = n / 5;
    n %= 5;

    twoBanknotes = n / 2;
    n %= 2;

    cout << hundredBanknotes << "x100lv " << fiftyBanknotes << "x50lv " << twentyBanknotes << "x20lv " << fiveBanknotes << "x5lv " << twoBanknotes << "x2lv " << n << "x1lv" << endl;

    return 0;
}