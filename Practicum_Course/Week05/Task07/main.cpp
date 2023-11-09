#include <iostream>

using namespace std;

void calculateNextDate(int& day, int& month, int& year);
bool isLeapYear(int n);

int main()
{
    int day, month, year;

    cin >> day >> month >> year;

    calculateNextDate(day, month, year);

    cout << day << ' ' << month << ' ' << year << endl;

    return 0;
}

void calculateNextDate(int& day, int& month, int& year)
{
    switch (day)
    {
        case 28:
            if (month == 2)
                if (isLeapYear(year))
                    day++;
                else
                {
                    day = 1;
                    month++;
                }
            else
                day++;
            break;
        case 29:
            if (month == 2)
            {
                day = 1;
                month++;
            }
            else
                day++;
            break;
        case 30:
            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
                day++;
            else
            {
                day = 1;
                month++;
            }
            break;
        case 31:
            day = 1;
            if (month == 12)
            {
                year++;
                month = 1;
            }
            else
                month++;
            break;
        default:
            day++;
            break;
    }

    // if (day < 28)
    //     day++;
    // else if (day == 28)
    //     if (!isLeapYear(year))
    //         if (month == 2)
    //             day = 1;
    //         else
    //             day++;
    //     else
    //         day++;
    
}

bool isLeapYear(int n)
{
    return (n % 4 == 0 && n % 100 != 0) || n % 400 == 0;
}