#include <iostream>

using namespace std;

int main()
{
	int k, n, m;

	cin >> k >> n >> m;

	for (int i = n; i <= m; i++)
	{
		bool isSpecial = true;

		int copyOfNum = i;
		while (copyOfNum != 0)
		{
			int lastDigit = (copyOfNum % 10);

			if (lastDigit == 0 || k % lastDigit != 0)
			{
				isSpecial = false;
				break;
			}

			copyOfNum /= 10;
		}

		if (isSpecial) cout << i << ' ';
	}

	return 0;
}