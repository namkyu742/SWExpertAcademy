#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_7728.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int result = 0;
		string input;
		cin >> input;

		int check[10] = { 0 };
		for (int i = 0; i < input.length(); i++) {
			check[input[i] - '0']++;
		}

		for (int i = 0; i < 10; i++) {
			if (check[i] != 0) result++;
		}

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}