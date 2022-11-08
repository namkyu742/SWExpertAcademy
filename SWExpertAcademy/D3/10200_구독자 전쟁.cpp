#include <iostream>

using namespace std;

int main()
{
	
	freopen_s(new FILE*, "inputs/input_10200.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int result = 0;
		int N, A, B;
		cin >> N >> A >> B;

		int rmax = min(A, B);
		int rmin = A + B;

		if (rmin < N) rmin = 0;
		else rmin = rmin - N;

		cout << "#" << tc << " " << rmax << " " << rmin << "\n";
	}

	return 0;
}