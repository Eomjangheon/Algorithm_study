#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <array>
#include <map>
#include <stack>

using namespace std;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, sum = 0;
	cin >> n;
	while (n--) {
		stack<char> stk;
		string str;
		cin >> str;
		for (char c : str) {
			if (stk.empty()) {
				stk.push(c);
			}
			else if (stk.top() == c) {
				stk.pop();
			}
			else {
				stk.push(c);
			}
		}
		if (stk.empty())sum++;

	}
	cout << sum;

}