#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_8673.txt", "r", stdin);
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int result = 0;
		int lev = 0;
		cin >> lev;
		
		vector<int> score(int(pow(2, lev)), 0);

		int a = 0;

		

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}

/*

31 46   15
13 29   16
27 45   18
10 57   47

46 29   17
45 57   12

46 57   11



*/