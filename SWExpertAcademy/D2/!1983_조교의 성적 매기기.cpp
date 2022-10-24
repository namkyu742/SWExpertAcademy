#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie();
	cout.tie();
	ios::sync_with_stdio(false);

	freopen_s(new FILE*, "inputs/input_1983.txt", "r", stdin);

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int result = 0;
		int N = 0, K = 0;
		cin >> N >> K;
		vector<vector<int>> list(N, vector<int>(5, 0));
		for (int i = 0; i < N; i++) {
			list[i][4] = i;
			cin >> list[i][0] >> list[i][1] >> list[i][2];
			list[i][3] = (list[i][0] * 35 + list[i][1] * 45 + list[i][2] * 20);
		}

		int a;

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}