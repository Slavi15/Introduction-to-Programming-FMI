// Въвежда се цяло число n - n лева. Да се изведе на конзолата как може да се разпределят по банкноти, така че да имаме минимален брой банкноти. В условието приемаме, че имаме банкноти от 1 и 2 лева.
// Вход: 193, Изход: 1x100lv 1x50lv 2x20lv 0x5lv 1x2lv 1x1lv

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