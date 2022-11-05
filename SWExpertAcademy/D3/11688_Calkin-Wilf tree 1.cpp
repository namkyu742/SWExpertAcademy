#include <iostream>
#include <string>
using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_11688.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		string input;
		cin >> input;

		int a = 1, b = 1;
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == 'L') {
				b = a + b;
			}
			if (input[i] == 'R') {
				a = a + b;
			}
		}
		

		cout << "#" << tc << " " << a << " " << b << "\n";
	}

	return 0;
}