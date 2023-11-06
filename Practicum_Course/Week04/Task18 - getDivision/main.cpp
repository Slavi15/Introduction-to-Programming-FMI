#include <iostream>

using namespace std;

int getDivision(int first, int second);

int main()
{
    int first, second;

    cin >> first >> second;

    cout << getDivision(first, second);

    return 0;
}

int getDivision(int first, int second)
{
    int quotient = 0;
    int max = 0, min = 0;

    if (first > second)
    {
        max = first;
        min = second;
    }
    else
    {
        max = second;
        min = first;
    }
    
    while (max >= min)
    {
        max -= min;
        quotient++;
    }

    return quotient;
}