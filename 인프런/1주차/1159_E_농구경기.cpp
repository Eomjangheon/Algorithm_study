#include<iostream>
using namespace std;

int ea;
int table[26];
bool flag = false;

int main() {
	cin >> ea;
	while (ea--) {
		string input;
		cin >> input;
		table[input[0] - 'a']++;
	}

	for (int i = 0; i < 26; ++i) {
		if (table[i] >= 5) {
			flag = true;
			cout << (char)(i + 'a');
		}
	}

	if (!flag) cout << "PREDAJA";

	
}