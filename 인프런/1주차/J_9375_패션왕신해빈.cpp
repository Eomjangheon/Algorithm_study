#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <array>
#include <map>

using namespace std;

map<int, string> intToStr;
map<string, int> strToInt;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		string str;
		cin >> str;
		intToStr[i] = str;
		strToInt[str] = i;
	}

	while (m--) {
		string str;
		cin >> str;
		if (isalpha(str[0])) {
			cout << strToInt[str] << "\n";
		}
		else {
			cout << intToStr[stoi(str)] << "\n";
		}
	}

}