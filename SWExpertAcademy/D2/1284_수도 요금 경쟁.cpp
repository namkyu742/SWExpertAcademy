#include <iostream>

using namespace std;

int main()
{
	freopen_s(new FILE*, "inputs/input_1284.txt", "r", stdin);

	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int P, Q, R, S, W, result = 0;
		cin >> P >> Q >> R >> S >> W;
		/*
			P : A사의 기본요금
			Q : B사의 기본요금
			R : B사의 초과량 기준
			S : B사의 초과량에 대한 요금
			W : 사용하는 수도 양
		*/

		int A = 0, B = 0;

		int Wb = W - R;
		A = W * P;
		if (Wb < 0) {
			B = Q;
		}
		else {
			B = Q + Wb * S;
		}

		if (A < B) result = A;
		else result = B;


		cout << "#" << tc << " " << result << "\n";
	}
	return 0;
}
