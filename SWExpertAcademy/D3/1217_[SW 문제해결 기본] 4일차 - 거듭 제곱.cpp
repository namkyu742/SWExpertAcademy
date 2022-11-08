#include <iostream>

using namespace std;

int run(int lev, int value, int offset, int value2)
{
	if (lev == offset)
		return value;
	run(lev + 1, value * value2, offset, value2);
}

int main()
{
	freopen_s(new FILE*, "inputs/input_1217.txt", "r", stdin);

	for (int tc = 1; tc <= 10; tc++) {
		int result;
		int input;
		cin >> input;
		int value, offset;
		cin >> value >> offset;
		result = run(1, value, offset, value);


		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}

/*
#1 43046721
#2 256
#3 7776
#4 10000000
#5 279936
#6 49
#7 43046721
#8 9
#9 65536
#10 262144
*/