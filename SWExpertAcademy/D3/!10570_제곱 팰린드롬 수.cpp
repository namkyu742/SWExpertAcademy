#include <iostream>
#include <string>

using namespace std;

int isPellindrom(int N) {
	string number = to_string(N);
	int len = number.length();

	if (len % 2 == 0) {
		for (int i = 0; i < len / 2; i++) {
			cout << number[i] << " " << number[len - i-1] << "\n";
		}
	}
	else {
		for (int i = 0; i < len / 2; i++) {
			cout << number[i] << "	 " << number[len - i-1] << "\n";
		}
	}
	return 0;
}

int main()
{
	freopen_s(new FILE*, "inputs/input_10570.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int result = 0;
		int A, B;
		//cin >> A >> B;
		

		A = 121;
		isPellindrom(A);

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}