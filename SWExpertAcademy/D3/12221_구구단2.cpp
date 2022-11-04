#include <iostream>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_12221.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int result;

		int A, B;
		cin >> A >> B;
		if (A >= 10 || B >= 10)
			result = -1;
		else
			result = A * B;
		

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}