/*
Silver5 random
�����̸�	: ��ǥ �����ϱ� 2
������ȣ	: 11651
���̵�	: s5
�ҿ�ð�	: 12m 03s
*/


#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

void algoInit()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

struct Compare {
	bool operator()(const pair<int,int>& a,const pair<int, int> b) const {
		if (a.second == b.second)
			return a.first < b.first;
		else
			return a.second < b.second;
	}

};


int main()
{
	algoInit();
	set < pair<int,int>, Compare > s;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x>>y;
		s.insert(make_pair(x,y));
	}
	for (const pair<int,int> a : s) {
		cout << a.first << " " << a.second << "\n";
	}
	
}
