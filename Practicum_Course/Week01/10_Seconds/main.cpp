// Задача 10: От конзолата се прочита цяло положително число - брой секунди. Да се изчисли на колко дни, часове, минути и секунди се равнява.

// 533628

// 6 days, 4 hours, 13 minutes and 48 seconds

#include <iostream>

using namespace std;

int main()
{
	int seconds;

	cin >> seconds;

	const int secondsInDay = 24 * 60 * 60;

	int days = seconds / secondsInDay;
	seconds %= secondsInDay;

	int hours = seconds / 3600;
	seconds %= 3600;

	int minutes = seconds / 60;
	seconds %= 60;

	cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds" << endl;
}