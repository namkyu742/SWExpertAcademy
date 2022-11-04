#include <iostream>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_13547.txt", "r", stdin);
	int T;
	cin >> T;
	
	for (int tc = 1; tc <= T; tc++) {
		string result;
		string N;
		cin >> N;
		int cnt = 0;
		for (int i = 0; i < N.length(); i++) {
			if (N[i] == 'x') cnt++;
		}
		if (cnt >= 8) result = "NO";
		else result = "YES";

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}