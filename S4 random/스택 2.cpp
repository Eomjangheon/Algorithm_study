/*
Silver4 random
문제이름	: 스택 2
문제번호	: 28278
난이도	: s4
소요시간	: 7m 32s
*/


#include <iostream>
#include <stack>

using namespace std;

void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}



int main()
{
	algoInit();
	stack<int> s;

	int testCase;
	cin >> testCase;

	for (int i = 0; i < testCase; ++i) {
		int input;
		cin >> input;
		if (input == 1) {
			int num;
			cin >> num;
			s.push(num);
		}
		else if (input == 2) {
			if (s.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (input == 3) {
			cout << s.size()<<"\n";
		}
		else if (input == 4) {
			cout << s.empty() << "\n";
		}
		else if (input == 5) {
			if (s.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << s.top() << "\n";
			}
		}

	}

	
}