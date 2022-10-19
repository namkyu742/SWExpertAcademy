#include <iostream>
#include <string>

using namespace std;

int is369(int number)
{
	string str_number = to_string(number);
	int cnt = 0;
	for (int i = 0; i < str_number.length(); i++) {
		if (str_number[i] == '3' || str_number[i] == '6' || str_number[i] == '9')
			cnt++;
	}
	return cnt;
}

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	//freopen_s(new FILE*, "inputs/input_1926.txt", "r", stdin);

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		int temp = is369(i);
		if (temp > 0) {
			for (int i = 0; i < temp; i++) {
				cout << '-';
			}
			cout << ' ';
		}
		else
			cout << i << ' ';

	}

	return 0;
}