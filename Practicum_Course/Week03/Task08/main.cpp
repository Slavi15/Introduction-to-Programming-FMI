#include <iostream>

using namespace std;

int main()
{
    int firstHours, firstMinutes, secondHours, secondMinutes;

    cin >> firstHours >> firstMinutes >> secondHours >> secondMinutes;

    int firstInMinutes = (firstHours * 60) + firstMinutes;
    int secondInMinutes = (secondHours * 60) + secondMinutes;

    if (firstInMinutes > secondInMinutes)
    {
        int diff = firstInMinutes - secondInMinutes;
        int diffHours = (diff / 60);
        int diffMinutes = (diff % 60);

        for (int i = firstHours; i <= (firstHours + diffHours); i++)
            for (int j = firstMinutes; j <= ((firstHours * 60) + diffMinutes); j++)
                if (j < 60)
                {
                    cout << i << ':' << j << endl;
                }
                else
                {
                    cout << i << ':' << (j - 59) << endl;
                }
    }
}