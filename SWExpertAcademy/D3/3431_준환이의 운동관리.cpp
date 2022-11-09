#include <iostream>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_3431.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int result;
		int L, U, X;
		cin >> L >> U >> X;

		if (X >= L && X <= U)
			result = 0;
		else if (X < L)
			result = L - X;
		else
			result = -1;

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}

/*
#1 60
#2 0
#3 -1
*/