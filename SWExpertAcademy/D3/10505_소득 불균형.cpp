#include <iostream>
#include <vector>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_10505.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int result;
		int N;
		cin >> N;
		vector<int> vect(N, 0);
		int sum = 0;
		for (int i = 0; i < N; i++) {
			cin >> vect[i];
			sum += vect[i];
		}
		sum /= N;

		int cnt = 0;
		for (int i = 0; i < N; i++) {
			if (vect[i] <= sum) cnt++;
		}

		result = cnt;

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}