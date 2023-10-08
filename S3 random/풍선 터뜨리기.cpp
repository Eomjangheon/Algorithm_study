/*
Silver3 random
�����̸�	: ǳ�� �Ͷ߸���
������ȣ	: 2346
���̵�	: s3
�ҿ�ð�	: 17m 02s
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

	deque<pair<int, int>> dq;
	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		int temp;
		cin >> temp;
		dq.push_back(make_pair(i, temp));
	}

	for (int i = 0; i < n; ++i) {
		cout << dq.front().first << " ";
		int next = dq.front().second;
		dq.pop_front();
		if (next > 0) {
			for (int j = 0; j < next - 1; ++j) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else if (next < 0) {
			for (int j = 0; j < abs(next); ++j) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
	

}