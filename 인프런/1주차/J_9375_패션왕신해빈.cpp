#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <array>
#include <map>

using namespace std;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	while (n--) {
		map<string, int> mp;
		int m;
		cin >> m;
		while (m--) {
			string name, type;
			cin >> name >> type;
			mp[type]++;
		}

		int sum = 1;
		for (auto a : mp) {
			sum *= (a.second + 1);
		}
		sum--;
		cout << sum << "\n";

	}

}