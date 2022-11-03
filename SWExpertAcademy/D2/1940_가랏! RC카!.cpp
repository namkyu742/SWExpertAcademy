#include <iostream>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_1940.txt", "r", stdin);

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int result = 0;
		int accel = 0;

		int N;
		cin >> N;

		for (int i = 0; i < N; i++) {
			int command;
			cin >> command;
			if (command != 0) {
				int offset;
				cin >> offset;

				if (command == 1) {
					accel += offset;
				}
				if (command == 2) {
					accel -= offset;
				}
			}
			if (accel < 0) accel = 0;
			result += accel;
		}
		

		cout << "#" << tc << " " << result << "\n";
	}
	return 0;
}


/*

#1 3
#2 4
#3 15
#4 27
#5 38
#6 44
#7 240
#8 91
#9 48
#10 111

*/