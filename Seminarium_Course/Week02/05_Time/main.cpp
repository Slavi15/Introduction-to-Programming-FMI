#include <iostream>

using namespace std;

int main()
{
    int hours, minutes;

    cin >> hours >> minutes;

    int allMinutes = (hours * 60) + minutes + 15;

    int finalHours = (allMinutes / 60) * (finalHours > 23); // finalHours * 1 if true, finalHours * 0 if false
    allMinutes %= 60;

    (finalHours <= 9) ? (cout << '0' << finalHours << ':') : (cout << finalHours << ':');
    (allMinutes <= 9) ? (cout << '0' << allMinutes << endl) : (cout << allMinutes << endl);

    return 0;
}