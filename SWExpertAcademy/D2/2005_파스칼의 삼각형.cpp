#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie();
	cout.tie();
	ios::sync_with_stdio(false);
	freopen_s(new FILE *, "inputs/input_2005.txt", "r", stdin);

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int N;
		cin >> N;

		vector<vector<int>> vect(N, vector<int>(N, 0));
		vect[0][0] = 1;

		for (int i = 1; i < N; i++) {
			vect[i][0] = 1;
			for (int j = 1; j < i + 1; j++) {
				vect[i][j] = vect[i - 1][j - 1] + vect[i - 1][j];
			}
			
		}

		cout << "#" << tc << "\n";

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if(vect[i][j] != 0)
					cout << vect[i][j] << " ";
			}
			cout << "\n";
		}

	}

	return 0;
}