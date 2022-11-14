#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_8658.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {		
		int list[10] = { 0 };

		for (int i = 0; i < 10; i++) {
			string temp;
			cin >> temp;
			int sum = 0;
			for (int j = 0; j < temp.length(); j++) {
				sum += temp[j] - '0';
			}
			list[i] = sum;
		}

		int max_value = 0;
		int min_value = 21e8;

		for (int i = 0; i < 10; i++) {
			if (max_value < list[i])
				max_value = list[i];

			if (min_value > list[i])
				min_value = list[i];
		}

		cout << "#" << tc << " " << max_value << " " << min_value << "\n";
	}

	return 0;
}