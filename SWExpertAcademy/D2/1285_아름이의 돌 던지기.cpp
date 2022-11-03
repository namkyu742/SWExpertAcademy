#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_1285.txt", "r", stdin);

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int result = 0;
		int N;
		cin >> N;
		vector<int> numbers(N, 0);
		int used[100001] = { 0 };
		int min = INT_MAX;
		for (int i = 0; i < N; i++) {
			cin >> numbers[i];
			if (numbers[i] < 0)numbers[i] *= -1;
			used[numbers[i]]++;
		}
		for (int i = 0; i < 100001; i++) {
			if (used[i] != 0) {
				//cout << i << " : " << used[i] << "\n";
				if (min > i) {
					min = i;
					result = used[i];
				}
			}
		}

		cout << "#" << tc << " " << min << " " << result << "\n";
	}
	return 0;
}


/*
#1 74 1
#2 18 1
#3 100000 1000
#4 4 1
#5 148 1
#6 10000 96
#7 9261 97
#8 0 651
#9 1 881
#10 1 659
*/