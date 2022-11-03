#include <iostream>

using namespace std;

int main()
{
	cin.tie();
	cout.tie();
	ios::sync_with_stdio(false);
	freopen_s(new FILE*, "inputs/input_14692.txt", "r", stdin);

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		string result;
		int N; 
		cin >> N;

		if (N % 2 == 0)result = "Alice";
		else result = "Bob";

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}

/*
2 A
3 B

10 A
5 5


*/