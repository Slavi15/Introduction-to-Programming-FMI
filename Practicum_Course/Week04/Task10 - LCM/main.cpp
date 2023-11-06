#include <iostream>

using namespace std;

int lcm(int first, int second);

int main()
{
    int first, second;

    cin >> first >> second;

    cout << lcm(first, second);

    return 0;
}

int lcm(int first, int second)
{
    unsigned max = (first > second) ? first : second;
    unsigned lcmCandidate = max;
 
    while (lcmCandidate += max, lcmCandidate % first != 0 || lcmCandidate % second != 0);

    // while (lcmCandidate % first != 0 || lcmCandidate % second != 0)
    //     lcmCandidate += max;

    return lcmCandidate;
}