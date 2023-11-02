#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int currentSum = 0;
    int smallestSum = 0, largestSum = 0;

    for (int i = 0; i < 2 * n; i += 2)
    {
        int n, m;

        cin >> n >> m;

        currentSum = (n + m);

        if (smallestSum == 0)
        {
            smallestSum = currentSum;
            largestSum = currentSum;
            continue;
        }

        if (currentSum < smallestSum)
            smallestSum = currentSum;

        if (currentSum > largestSum)
            largestSum = currentSum;
    }

    int maxDifference = (largestSum - smallestSum);
    (maxDifference == 0) ? (cout << "Equal sums: " << largestSum) : (cout << "Different sums. Max Difference: " << maxDifference);

    return 0;
}