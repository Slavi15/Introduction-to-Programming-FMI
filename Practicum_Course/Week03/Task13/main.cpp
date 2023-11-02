#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int biggestNumber = -1;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int number;

        cin >> number;

        sum += number;
        if (number > biggestNumber) biggestNumber = number;
    }

    (biggestNumber == (sum - biggestNumber)) ? (cout << "Yes: " << biggestNumber) : (cout << "No");

    return 0;
}