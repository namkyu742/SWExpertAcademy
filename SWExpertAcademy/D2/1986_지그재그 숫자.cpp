#include <iostream>

using namespace std;

int main()
{
	cin.tie();
	cout.tie();
	ios::sync_with_stdio(false);

	freopen_s(new FILE*, "inputs/input_1986.txt", "r", stdin);

	int arr[10] = { 1, -2, 3, -4, 5, -6, 7, -8, 9, -10 };

	int T = 0;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int result = 0;
		int N = 0;
		cin >> N;

		for (int i = 0; i < N; i++) {
			result += arr[i];
		}
		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}