#include<iostream>
#include<string>
using namespace std;

string aeiou = "aeiou";
bool flag1;
int flag2, flag3;
char flag4=' ';

void judge(const string& input) {
	for (char c : input) {
		if (flag4 == c) {
			if (c != 'e' && c != 'o') {
				cout << "<" << input << "> is not acceptable.\n";
				return;
			}
		}

		if (aeiou.find(c)!=string::npos)
		{
			flag1 = true;
			flag2++;
			flag3 = 0;
		}
		else {
			flag3++;
			flag2 = 0;
		}
		if (flag2 == 3 || flag3 == 3) {
			cout << "<" << input << "> is not acceptable.\n";
			return;
		}
		flag4 = c;
			
	}
	if (!flag1) {
		cout << "<" << input << "> is not acceptable.\n";
		return;
	}
	cout << "<" << input << "> is acceptable.\n";
}

int main() {

	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	while (true) {
		string input;
		cin >> input;

		if (input == "end")
			return 0;
		judge(input);

		flag1 = false;
		flag2 = 0;
		flag3 = 0;
		flag4 = ' ';
	}
}