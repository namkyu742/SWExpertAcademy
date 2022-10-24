#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	cin.tie();
	cout.tie();
	ios::sync_with_stdio(false);

	freopen_s(new FILE*, "inputs/input_1989.txt", "r", stdin);

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int result = 1;
		char str[11];
		cin >> str;

		int index_left = 0;
		int index_right = strlen(str)-1;

		while (true)
		{
			if (index_left >= index_right) break;
			if (str[index_left++] != str[index_right--]) result = 0;
		}

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}