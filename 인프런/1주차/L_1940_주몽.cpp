#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <array>
#include <map>

using namespace std;
array< int, 26> table;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string str;
	cin >> str;

	for (char c : str) {
		table[c - 'A']++;
	}

	int odd = 0;
	int oddPos = -1;
	for (int i = 0; i < 26; ++i) {
		if (table[i] % 2) {
			odd++;
			oddPos = i;
		}
	}

	if (odd > 1) {
		cout << "I'm Sorry Hansoo";
		return 0;
	}

	for (int i = 0; i < 26; ++i) {
		for (int j = 0; j < table[i] / 2; ++j)
			cout << (char)(i + 'A');
	}
	if (odd == 1) {
		cout<< (char)(oddPos + 'A');
	}
	for (int i = 25; i >= 0; --i) {
		for (int j = 0; j < table[i] / 2; ++j)
			cout << (char)(i + 'A');
	}

	
}