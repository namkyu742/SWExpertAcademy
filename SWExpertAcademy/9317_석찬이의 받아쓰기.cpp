#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_9317.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int result = 0;
		int len = 0;
		cin >> len;
		string input, input2;
		cin >> input;
		cin >> input2;
		
		for (int i = 0; i < input.length(); i++) {
			//input[i] = tolower(input[i]);
			if (input[i] == input2[i]) result++;
		}
		
		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}

/*
#1 11
#2 2
*/