/*
Silver5 random
�����̸�	: �ܾ� ����
������ȣ	: 1181
���̵�	: s5
�ҿ�ð�	: 10m 03s
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
	bool operator()(const string& a,const string& b) const {
		if (a.size() == b.size())
			return a < b;
		else
			return a.size() < b.size();
	}

};


int main()
{
	algoInit();
	set < string, Compare > s;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string temp;
		cin >> temp;
		s.insert(temp);
	}
	for (const string& str : s) {
		cout << str << "\n";
	}
	
}
