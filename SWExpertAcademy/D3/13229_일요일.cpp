#include <iostream>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_13229.txt", "r", stdin);
	int T;
	cin >> T;

	string days[7] = { "SAT", "FRI", "THU", "WED", "TUE", "MON", "SUN" };

	for (int tc = 1; tc <= T; tc++) {
		int result;
		string day;
		cin >> day;
		int day_number;
		for (int i = 0; i < 7; i++)
			if (day == days[i])
				day_number = i;

		result = (day_number) % 7 + 1;

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}