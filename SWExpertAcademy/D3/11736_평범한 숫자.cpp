#include <iostream>
#include <vector>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_11736.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int result;
		int N, cnt = 0;
		cin >> N;
		
		vector<int> vect(N, 0);
		for (int i = 0; i < N; i++)
			cin >> vect[i];

		for (int i = 1; i < N - 1; i++) {
			if (vect[i - 1] < vect[i] && vect[i] < vect[i + 1])
				cnt++;
			if (vect[i - 1] > vect[i] && vect[i] > vect[i + 1])
				cnt++;
		}
		result = cnt;

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}