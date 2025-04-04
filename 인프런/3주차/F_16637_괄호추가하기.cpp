#include<iostream>
#include <stack>
#include <string>

using namespace std;
long long ans = -20000000000;
stack<char> s;
int priority(char c) {
	if (c == '+' || c == '-')return 1;
	if (c == '*')return 1;
	return 0;
}

void calc(string temp) {
	string result = "";
	for (char c : temp) {
		if (isalnum(c)) {
			result += c;
			continue;
		}

		if (s.empty() || c == '(') {
			s.push(c);
			continue;
		}

		if (c == ')') {
			while (s.top() != '(') {
				result += s.top();
				s.pop();
			}
			s.pop();
			continue;
		}

		if (priority(c) > priority(s.top())) {
			s.push(c);
		}
		else {
			while (!s.empty() && priority(c) <= priority(s.top())) {
				result += s.top();
				s.pop();
			}
			s.push(c);
		}
	}

	while (!s.empty()) {
		result += s.top();
		s.pop();
	}

	long long first, second;
	stack<long long> nums;
	for (char c : result) {
		if (isalnum(c)) nums.push(c - '0');
		else {
			second = nums.top();
			nums.pop();
			first = nums.top();
			nums.pop();
			if (c == '+') {
				nums.push(first + second);
			}
			if (c == '-') {
				nums.push(first - second);
			}
			if (c == '*') {
				nums.push(first * second);
			}
		}
	}
	//cout << temp << endl;
	//cout << nums.top() << endl;
	ans = max(ans, nums.top());
	nums.pop();
}

void solve(string input,int pos) {
	string temp = input;
	temp.insert(pos, "(");
	temp.insert(pos+4, ")");
	calc(temp);
	//cout << temp << endl;
	for (int i = pos + 6; i < temp.size() - 2; i += 2) {
		solve(temp, i);
	}
	
	
}


int main() {
	int n;
	cin >> n;

	string input;
	cin >> input;
	if (input.size() == 1) {
		cout << input[0] - '0';
		return 0;
	}

	calc(input);
	for (int i = 0; i < input.size() - 2; i += 2) {
		solve(input, i);
	}
	cout << ans;
}