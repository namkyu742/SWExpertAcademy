#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_4406.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		string result="";
		string input;
		cin >> input;

		for (int i = 0; i < input.length(); i++) {
			if (input[i] == 'a') continue;
			if (input[i] == 'e') continue;
			if (input[i] == 'i') continue;
			if (input[i] == 'o') continue;
			if (input[i] == 'u') continue;
			else result += input[i];
		}

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}