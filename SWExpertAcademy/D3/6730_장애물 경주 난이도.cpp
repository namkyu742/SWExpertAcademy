#include <iostream>
#include <vector>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_6730.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int result_a = 0, result_b = 0;
		int N;
		cin >> N;
		vector<int> v(N, 0);
		for (int i = 0; i < N; i++)
			cin >> v[i];

		for (int i = 1; i < N; i++) {
			if (v[i - 1] < v[i]) {
				int temp = v[i] - v[i - 1];
				if (result_a < temp) {
					result_a = temp;
				}
			}
			if (v[i - 1] > v[i]) {
				int temp = v[i - 1] - v[i];
				if (result_b < temp) {
					result_b = temp;
				}
			}
		}


		cout << "#" << tc << " " << result_a << " " << result_b << "\n";
	}

	return 0;
}