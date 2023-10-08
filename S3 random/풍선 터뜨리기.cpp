/*
Silver3 random
문제이름	: 풍선 터뜨리기
문제번호	: 2346
난이도	: s3
소요시간	: 17m 02s
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