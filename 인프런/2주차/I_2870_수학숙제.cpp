#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	vector<string> ans;

	int n;
	cin >> n;


	while (n--) {
		string temp;
		cin >> temp;
		char pre = ' ';

		string num = "";
		for (char c : temp) {
			if (isalpha(c)) {

				if (pre == '0' && num == "") {
					ans.push_back("0");
				}

				if(num != "")
					ans.push_back(num);
				num = "";
			}
			else {
				if(c!='0' || num.size()!=0)
				num += c;
			}

			pre = c;
		}
		if (pre == '0' && num == "") {
			ans.push_back("0");
		}

		if (num != "")
			ans.push_back(num);
	}

	sort(ans.begin(), ans.end(), [](const string& a, const string& b) {
		if (a.size() == b.size()) {
			return a < b;
		}

		return a.size() < b.size();
		});
	for (string n : ans) {
		cout << n << "\n";
	}

	
}