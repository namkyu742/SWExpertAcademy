#include <iostream>

using namespace std;

int main()
{
	cin.tie();
	cout.tie();
	ios::sync_with_stdio(false);

	freopen_s(new FILE *, "inputs/input_1948.txt", "r", stdin);

	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int T = 0;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int result = 0;
		int M1, D1, M2, D2;
		cin >> M1 >> D1 >> M2 >> D2;

		if (M1 == M2) {
			result = D2 - D1 + 1;
		}
		else {
			// M2달의 D2만큼
			// M1+1 ~ M2-1
			// M1달의 D1부터 마지막날까지
			int a = D2;
			int b = 0;
			for (int i = M1; i < M2-1; i++)
				b += days[i];
			int c = days[M1-1] - D1;
			result = a + b + c + 1;
		}

		cout << "#" << tc << " " << result << "\n";
	}
	return 0;
}

/*

#1 31
#2 103
#3 161
#4 50
#5 120
#6 194
#7 81
#8 83
#9 238
#10 365

*/