#include <iostream>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_10912.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		string result;
		string input;
		cin >> input;
		int used[26] = { 0 };

		for (int i = 0; i < input.length(); i++)
		{
			used[input[i] - 'a']++;
		}
		int cnt = 0;
		for (int i = 0; i < 26; i++) {
			if (used[i] % 2 == 1){
				result += ('a' + i);
				cnt++;
			}
		}
		if (cnt == 0) result = "Good";

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}