#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	cin.tie();
	cout.tie();
	ios::sync_with_stdio(false);
	freopen_s(new FILE*, "inputs/input_2007.txt", "r", stdin);

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int result = 0;

		char origin_str[31];
		cin >> origin_str;

		char str[31] = "";
		int index = 0;
		while (true) {
			if (index == 31)
				break;
			str[index] = origin_str[index];
			printf("%s\n", str);
			index++;
		}



		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}