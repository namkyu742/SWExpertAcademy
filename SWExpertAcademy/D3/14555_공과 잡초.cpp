#include <iostream>

using namespace std;

int main()
{
	cin.tie();
	cout.tie();
	ios::sync_with_stdio(false);
	freopen_s(new FILE*, "inputs/input_14555.txt", "r", stdin);

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int result = 0;
		string field;
		cin >> field;

		int len = field.length();
		for (int i = 0; i < len; i++) {
			if (field[i] == '(' && field[i+1] != ')')	result++;
			if (field[i] == ')' && field[i-1] != '(')	result++;

			if (field[i] == '(' && field[i+1] == ')')	result++;
		}



		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}

/*

#1 0
#2 2
#3 3

*/