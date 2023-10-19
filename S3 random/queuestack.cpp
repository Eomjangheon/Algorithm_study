/*
Silver3 random
문제이름	: queuestack
문제번호	: 24511
난이도	: s3
소요시간	: 9m 44s
*/


#include <iostream>
#include <deque>
#include <queue>

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
	
	deque<int> s;
	queue<int> q;

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int input;
		cin >> input;
		q.push(input);
	}

	for (int i = 0; i < n; ++i) {
		int input;
		cin >> input;
		if (q.front()==0) {
			s.push_back(input);
		}
		q.pop();
	}
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int input;
		cin >> input;
		s.emplace_front(input);
	}

	for (int i = 0; i < n; ++i) {
		cout << s.back()<<" ";
		s.pop_back();
	}
}