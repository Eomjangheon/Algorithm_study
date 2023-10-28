/*
Silver3 random
�����̸�	: ��Ű��Ű ���ĵ帮��
������ȣ	: 12789
���̵�	: s3
�ҿ�ð�	: 20m 22s
*/


#include <iostream>
#include <queue>
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
	
	queue<int> q;
	stack<int> s;

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int input;
		cin >> input;
		q.push(input);
	}
	int order = 1;
	while (true) {
		if (q.empty() && s.empty()) {
			break;
		}
		
		if (q.empty()) {
			if (s.top() == order) {
				s.pop();
				order++;
			}
			else {
				cout << "Sad";
				return 0;
			}
		}
		else if (q.front() == order) {
			q.pop();
			order++;
		}
		else {
			if (!s.empty()) {
				if (s.top() == order) {
					s.pop();
					order++;
				}
				else {
					int temp = q.front();
					q.pop();
					s.push(temp);
				}
			}
			else {
				int temp = q.front();
				q.pop();
				s.push(temp);
			}
		}
		
	}
	cout << "Nice";
}
