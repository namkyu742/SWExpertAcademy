#include <iostream>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_11856.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		string result;
		string S;
		cin >> S;
		int used[26] = { 0 };
		for (int i = 0; i < 4; i++) {
			used[S[i] - 'A']++;
		}

		bool flag = true;
		int cnt1 = 0;
		for (int i = 0; i < 26; i++) {
			if (used[i] != 0) {
				cnt1++;
				if (used[i] > 2)
					flag = false;
			}
		}
		if (cnt1 != 2) flag = false;

		if (flag) result = "Yes";
		else result = "No";
		

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}

/*

#1 Yes
#2 Yes
#3 Yes
#4 No
#5 No
*/