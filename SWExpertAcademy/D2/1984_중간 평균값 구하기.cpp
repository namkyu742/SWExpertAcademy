#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_1984.txt", "r", stdin);

	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		vector<int> list(10, 0);

		for (int i = 0; i < 10; i++)
			cin >> list[i];

		sort(list.begin(), list.end());

		double sum = 0;
		for (int i = 1; i < 9; i++)
			sum += list[i];

		int result = round(sum / 8);

		cout << "#" << tc << " " << result << "\n";
			
	}

	return 0;
}