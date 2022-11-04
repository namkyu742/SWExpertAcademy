#include <iostream>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_13218.txt", "r", stdin);

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int result = 0;
		int N;
		cin >> N;

		if (N <= 2)
			result = 0;
		else
			result = N / 3;
		


		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}