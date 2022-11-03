#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string toBinary(int n)
{
	string r;
	char bits[8];
	for (int i = 0; i < 8; i++) {
		bits[i] = '0';
	}
	int i = 0;
	while (n != 0) {
		if (n % 2 == 0)
			bits[i] = '0';
		else
			bits[i] = '1';
		
		n /= 2;
		i++;
	}
	for (i = 5; i >= 0; i--) {
		r += bits[i];
	}
	return r;
}

char toChar(char buf[]) {
	int n = 0;
	int a = 1;
	for (int i = 7; i >= 0; i--) {
		n += buf[i] * a;
		a *= 2;
	}
	char temp = n;
	return temp;
}

int main()
{
	freopen_s(new FILE*, "inputs/input_1928.txt", "r", stdin);

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		string result = "";

		char str[100000];
		int str2[100000];
		cin >> str;

		string str3 = "";

		int len = strlen(str);


		for (int i = 0; i < len; i++) {
			if (str[i] >= 'A' && str[i] <= 'Z')
				str2[i] = str[i] - 'A';
			if (str[i] >= 'a' && str[i] <= 'z')
				str2[i] = str[i] - 'a' + 26;
			if (str[i] >= '0' && str[i] <= '9')
				str2[i] = str[i] - '0' + 52;
			//cout << str2[i] << " ";
			str3 += toBinary(str2[i]);
		}

		
		char buf[8] = { 0 };
		int i = 0;
		while (1) {
			if (str3[i] != '0' && str3[i] != '1') {
				break;
			}

			buf[i % 8] = str3[i] - '0';

			if (i % 8 == 7) {
				result += toChar(buf);
				memset(buf, 0, sizeof(buf));
			}
			i++;
				
		}



		cout << "#" << tc << " " << result << "\n";
	}
	return 0;
}

/*
#1 Life itself is a quotation.
#2 Suspicion follows close on mistrust.
#3 To doubt is safer than to be secure.
#4 Only the just man enjoys peace of mind.
#5 A full belly is the mother of all evil.
#6 A gift in season is a double favor to the needy.
#7 Books are ships which pass through the vast seas of time.
#8 Let thy speech be short, comprehending much in few words.
#9 The world is a beautiful book, but of little use to him who cannot read it.
#10 He who spares the rod hates his son, but he who loves him is careful to discipline him.
*/