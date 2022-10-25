#include <iostream>
#include <vector>

using namespace std;

void printVect(vector<vector<int>> vect)
{
	int H = vect.size();
	for (int i = 0; i < H; i++) {
		int W = vect[i].size();
		for (int j = 0; j < W; j++)
			cout << vect[i][j] << " ";
		cout << "\n";
	}
}

int main()
{
	cin.tie();
	cout.tie();
	ios::sync_with_stdio(false);

	freopen_s(new FILE*, "inputs/input_1954.txt", "r", stdin);

	int T = 0;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int N = 0;
		cin >> N;
		vector<vector<int>> vect(N, vector<int>(N, 0));
		int x = 0, y = 0;
		int cnt = 1;
		for (int i = 0; i < N * N; i++) {
			vect[y][x] = cnt++;

		}


		cout << "#" << tc << "\n";
		printVect(vect);
	}

	return 0;
}