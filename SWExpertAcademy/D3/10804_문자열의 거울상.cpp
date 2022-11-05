#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_10804.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		string result = "";
		string input;
		cin >> input;

		for (int i = input.length() - 1; i >= 0; i--) {
			if (input[i] == 'b') result += 'd';
			if (input[i] == 'd') result += 'b';
			if (input[i] == 'p') result += 'q';
			if (input[i] == 'q') result += 'p';
		}
		

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}