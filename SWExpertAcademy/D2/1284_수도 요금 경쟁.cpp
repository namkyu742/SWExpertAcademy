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
			P : A���� �⺻���
			Q : B���� �⺻���
			R : B���� �ʰ��� ����
			S : B���� �ʰ����� ���� ���
			W : ����ϴ� ���� ��
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
