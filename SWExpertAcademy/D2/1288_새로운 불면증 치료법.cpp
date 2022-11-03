#include <iostream>

using namespace std;

int isComplete(int used[10]) {
	for (int i = 0; i < 10; i++) {
		if (used[i] == 0) return 0;
	}
	return 1;
}

int main()
{
	freopen_s(new FILE*, "inputs/input_1288.txt", "r", stdin);

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int result = 0;
		int N;
		cin >> N;
		int used[10] = { 0 };
		int origin1 = N;
		int origin2 = N;


		int ret = isComplete(used);
		while (!ret) {
			N = origin1;
			while (N != 0) {
				used[N % 10]++;
				N /= 10;
			}
			result++;
			origin1 += origin2;
			ret = isComplete(used);

			//for (int i = 0; i < 10; i++)	printf("%2d ", i);
			//cout << "\n";
			//for (int i = 0; i < 10; i++)	printf("%2d ", used[i]);
			//cout << " : " << origin1-origin2  << " result : " << result << "\n\n";
		}
		
		//cout << "-------------------------";
		cout << "#" << tc << " " << result*origin2 << "\n";
	}
	return 0;
}


/*
#1 10
#2 90
#3 110
#4 6475
#5 5076
*/