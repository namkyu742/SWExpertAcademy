#include <iostream>

using namespace std;

int main()
{
	cin.tie();
	cout.tie();
	ios::sync_with_stdio(false);

	freopen_s(new FILE*, "inputs/input_1945.txt", "r", stdin);

	int arr[5] = { 2, 3, 5, 7, 11 };

	int T = 0;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int result[5] = { 0 };
		int N = 0;
		cin >> N;
		int q = 0;
		int r = 0;
		for (int i = 0; i < 5; i++) {
			while (true) {
				q = N / arr[i];
				r = N % arr[i];
				if (r != 0) break;
				N = q;
				result[i]++;
			}
		}
		cout << "#" << tc << " ";
		for (int i = 0; i < 5; i++) cout << result[i] << " ";
		cout << "\n";
	}
	return 0;
}

/*
6791400
2*3
848925
3*3
94325
5*2
3773
7*3
11
11*1

*/