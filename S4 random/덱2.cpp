/*
Silver4 random
문제이름	: 덱2
문제번호	: 28279
난이도	: s4
소요시간	: 24m 22s
*/


#include <iostream>
#include <deque>

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
	
	deque<int> dq;
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		int input;
		cin >> input;

		if (input == 1) {
			int num;
			cin >> num;
			dq.push_front(num);
		}
		else if (input == 2) {
			int num;
			cin >> num;
			dq.push_back(num);
		}
		else if (input == 3) {
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (input == 4) {
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
		else if (input == 5) {
			cout << dq.size()<<"\n";
		}
		else if (input == 6) {
			cout << dq.empty() << "\n";
		}
		else if (input == 7) {
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.front()<<"\n";
			}
		}
		else if (input == 8) {
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.back()<<"\n";
			}
		}
	}
}
