#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_14178.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int result;

		int N, D;
		cin >> N >> D;

		int a = 2 * D + 1;
		double temp = (double)N / a;
		result = ceil(temp);


		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}

/*

#1 2
#2 1
#3 15
*/