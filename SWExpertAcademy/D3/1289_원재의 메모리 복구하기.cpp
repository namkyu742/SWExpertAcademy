#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_1289.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int result = 0;
		string input;
		cin >> input;
		if (input[0] == '1')result++;
		for (int i = 1; i < input.length(); i++)
		{
			if (input[i - 1] != input[i]) result++;
		}
		

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}

/*
#1 49
#2 1
#3 19
#4 23
#5 15
#6 19
#7 6
#8 27
#9 30
#10 8
*/