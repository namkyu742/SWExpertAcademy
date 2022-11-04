#include <iostream>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_12368.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int result;
		int A, B;
		cin >> A >> B;

		result = (A + B) % 24;

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}